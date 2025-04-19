#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "itemeditordialog.h"
#include "searchdialog.h"
#include "filemanager.h"
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->PATH = QDir::currentPath() + "/inventory.json";
    this->isModified = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::place_element(GameItem* item) {
    int size = ui->tableWidget->rowCount();

    ui->tableWidget->setRowCount(size + 1);

    ui->tableWidget->setItem(size, 0, new QTableWidgetItem(item->getName()));
    ui->tableWidget->setItem(size, 1, new QTableWidgetItem(item->getRarity()));
    ui->tableWidget->setItem(size, 2, new QTableWidgetItem(item->getCategory()));
    ui->tableWidget->setItem(size, 3, new QTableWidgetItem(item->getType()));
    ui->tableWidget->setItem(size, 4, new QTableWidgetItem(QString::number(item->getDurability())));
    ui->tableWidget->setItem(size, 5, new QTableWidgetItem(QString::number(item->getWeight())));

    if (Weapon* weapon = dynamic_cast<Weapon*>(item)) {
        ui->tableWidget->setItem(size, 6, new QTableWidgetItem(QString::number(weapon->getDamage())));
        ui->tableWidget->setItem(size, 7, new QTableWidgetItem("0"));
    }

    else if (Armor* armor = dynamic_cast<Armor*>(item)) {
        ui->tableWidget->setItem(size, 7, new QTableWidgetItem(QString::number(armor->getDefense())));
        ui->tableWidget->setItem(size, 6, new QTableWidgetItem("0"));
    } else {
        ui->tableWidget->setItem(size, 6, new QTableWidgetItem("0"));
        ui->tableWidget->setItem(size, 7, new QTableWidgetItem("0"));
    }

}


void MainWindow::place_all() {
    ui->tableWidget->setRowCount(0);

    clearHighlights();

    for (int i = 0; i < inventory.getSize(); i++)
        place_element(inventory.getItem(i));
}


int MainWindow::sumStatistic(int index) {
    int result = 0;

    for (int i = 0; i < inventory.getSize(); i++)
        result += ui->tableWidget->item(i, index)->text().toInt();

    return result;
}

int MainWindow::minStatistic(int index) {
    int result = 99999;

    int num = 0; bool ok;
    for (int i = 0; i < inventory.getSize(); i++) {
        num = ui->tableWidget->item(i, index)->text().toInt(&ok);
        if (!ok) num = result;
        if (result > num)
            result = num;
    }

    return result;

}

int MainWindow::maxStatistic(int index) {
    int result = -1;

    int num = 0; bool ok;
    for (int i = 0; i < inventory.getSize(); i++) {
        num = ui->tableWidget->item(i, index)->text().toInt(&ok);
        if (!ok) num = result;
        if (result < num)
            result = num;
    }

    return result;
}

float MainWindow::midStatistic(int index) {
    return static_cast<float>(sumStatistic(index)) / inventory.getSize();
}


void MainWindow::clearHighlights() {
    for (int i = 0; i < ui->tableWidget->rowCount(); i++)
        for (int j = 0; j < ui->tableWidget->columnCount(); j++)
            if (ui->tableWidget->item(i, j))
                ui->tableWidget->item(i, j)->setBackground(Qt::white);
}

void MainWindow::highlightResults(const std::vector<int>& indexes) {
    clearHighlights();

    for (int index: indexes)
        for (int i = 0; i < ui->tableWidget->columnCount(); i++)
            if (ui->tableWidget->item(index, i))
                ui->tableWidget->item(index, i)->setBackground(Qt::green);
}


void MainWindow::on_pB_add_clicked()
{
    ItemEditorDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString category = dialog.getCategory();
        std::unique_ptr<GameItem> item;

        if (category == "Weapon") {
            item = std::make_unique<Weapon> (
                dialog.getName(),
                dialog.getRarity(),
                dialog.getType(),
                dialog.getDurability(),
                dialog.getWeight(),
                dialog.getAttack()
            );
        }

        else if (category == "Armor") {
            item = std::make_unique<Armor>(
                dialog.getName(),
                dialog.getRarity(),
                dialog.getType(),
                dialog.getDurability(),
                dialog.getWeight(),
                dialog.getDefense()
            );
        }

        else {
            item = std::make_unique<GameItem>(
                dialog.getName(),
                dialog.getRarity(),
                category,
                dialog.getType(),
                dialog.getDurability(),
                dialog.getWeight()
            );
        }

        inventory.addItem(std::move(item));
        place_element(inventory.getItem(inventory.getSize() - 1));

        clearHighlights();

        isModified = true;
    }


}


void MainWindow::on_pB_del_clicked()
{
    int index = ui->sB_del->value() - 1;

    if (index >= inventory.getSize()) {
        QMessageBox::warning(this, "Error", "Неверный индекс для удаления");
        return;
    }

    inventory.removeItem(index);
    ui->tableWidget->removeRow(index);

    clearHighlights();

    isModified = true;
}


void MainWindow::on_pB_change_clicked()
{
    int index = ui->sB_change->value() - 1;

    if (index >= inventory.getSize()) {
        QMessageBox::warning(this, "Error", "Неверный индекс для удаления");
        return;
    }

    ItemEditorDialog dialog(this);

    GameItem* item = inventory.getItem(index);

    dialog.setName(item->getName());
    dialog.setRarity(item->getRarity());
    dialog.setCategory(item->getCategory());
    dialog.setType(item->getType());
    dialog.setDurability(item->getDurability());
    dialog.setWeight(item->getWeight());

    if (Weapon* weapon = dynamic_cast<Weapon*>(item))
        dialog.setAttack(weapon->getDamage());
    else if (Armor* armor = dynamic_cast<Armor*>(item))
        dialog.setDefense(armor->getDefense());


    if (dialog.exec() == QDialog::Accepted) {
        bool modified = false;

        if (dialog.isNameChecked()) {
            inventory.editItem(index, "name", dialog.getName());
            modified = true;
        }
        if (dialog.isRarityChecked()) {
            inventory.editItem(index, "rarity", dialog.getRarity());
            modified = true;
        }
        if (dialog.isTypeChecked()) {
            inventory.editItem(index, "type", dialog.getType());
            modified = true;
        }
        if (dialog.isDurabilityChecked()) {
            inventory.editItem(index, "durability", dialog.getDurability());
            modified = true;
        }
        if (dialog.isWeightChecked()) {
            inventory.editItem(index, "weight", dialog.getWeight());
            modified = true;
        }
        if (dialog.isAttackChecked()) {
            inventory.editItem(index, "damage", dialog.getAttack());
            modified = true;
        }
        if (dialog.isDefenseChecked()) {
            inventory.editItem(index, "defense", dialog.getDefense());
            modified = true;
        }

        if (item->getCategory() != dialog.getCategory()) {
            std::unique_ptr<GameItem> newitem;

            QString category = dialog.getCategory();            

            if (category == "Weapon") {
                newitem = std::make_unique<Weapon>(
                    dialog.getName(), dialog.getRarity(), dialog.getType(),
                    dialog.getDurability(), dialog.getWeight(), dialog.getAttack());
            } else if (category == "Armor") {
                newitem = std::make_unique<Armor>(
                    dialog.getName(), dialog.getRarity(), dialog.getType(),
                    dialog.getDurability(), dialog.getWeight(), dialog.getDefense());
            } else {
                newitem = std::make_unique<GameItem>(
                    dialog.getName(), dialog.getRarity(), dialog.getCategory(), dialog.getType(),
                    dialog.getDurability(), dialog.getWeight());
            }

            inventory.removeItem(index);
            inventory.addItem(std::move(newitem));

            dialog.setAttack(0);
            dialog.setDefense(0);
        }

        if (modified)
            isModified = true;

        place_all();

    }
}


void MainWindow::on_rB_name_clicked()
{
    inventory.sort("name");
    place_all();
}


void MainWindow::on_rB_rarity_clicked()
{
    inventory.sort("rarity");
    place_all();
}


void MainWindow::on_rB_category_clicked()
{
    inventory.sort("category");
    place_all();
}


void MainWindow::on_rB_type_clicked()
{
    inventory.sort("type");
    place_all();
}


void MainWindow::on_rB_durability_clicked()
{
    inventory.sort("durability");
    place_all();
}


void MainWindow::on_rB_weight_clicked()
{
    inventory.sort("weight");
    place_all();
}


void MainWindow::on_rB_attack_clicked()
{
    inventory.sort("attack");
    place_all();
}


void MainWindow::on_rB_defense_clicked()
{
    inventory.sort("defense");
    place_all();
}


void MainWindow::on_pB_statistic_clicked()
{
    if (inventory.getSize() <= 0)
        return;

    int index = ui->cB_characteristics_type->currentIndex() + 4;
    QString result;

    switch (ui->cB_statistic_type->currentIndex()) {
    case 0:
        result = "Минимальное число по данным характеристкиам " + QString::number(minStatistic(index));
        break;
    case 1:
        result = "Максимальное число по данным характеристкиам " + QString::number(maxStatistic(index));
        break;
    case 2:
        result = "Суммарное число по данным характеристкиам " + QString::number(sumStatistic(index));
        break;
    case 3:
        result = "Среднее число по данным характеристкиам " + QString::number(midStatistic(index), 'f', 2);
        break;
    default:
        result = "";
        break;
    }

    QMessageBox::information(this, "Statistic", result);
}


void MainWindow::on_pB_open_searchdialog_clicked()
{
    if (inventory.getSize() <= 0) {
        QMessageBox::information(this, "Information", "Инвентарь пуст");
        return;
    }

    SearchDialog dialog(this);

    if (dialog.exec() == QDialog::Accepted) {
        std::vector<int> results = inventory.searchItems(
            dialog.isDurabilityChecked(), dialog.getMinDurability(), dialog.getMaxDurability(),
            dialog.isWeightChecked(), dialog.getMinWeight(), dialog.getMaxWeight(),
            dialog.isAttackChecked(), dialog.getMinAttack(), dialog.getMaxAttack(),
            dialog.isDefenseChecked(), dialog.getMinDefense(), dialog.getMaxDefense()
            );

        highlightResults(results);

        QMessageBox::information(this, "Search results", "Найдено элементов " + QString::number(results.size()));
    }
}

void MainWindow::on_pB_clearHighlights_clicked()
{
    clearHighlights();
}



void MainWindow::on_rB_saveToFile_clicked()
{
    FileManager filemanager;

    if (filemanager.saveToFile(PATH, inventory)) {
        QMessageBox::information(this, "Save in file", "Инвентарь сохранен успешно");
        isModified = false;

        ui->rB_saveToFile->setChecked(0);
    }
    else
        QMessageBox::warning(this, "Save in file", "Ошибка при сохранении файла");
}


void MainWindow::on_rB_loadFromFile_clicked()
{
    FileManager filemanager;

    if (filemanager.loadToFile(PATH, inventory)) {
        place_all();
        QMessageBox::information(this, "Load from file", "Инвентарь успешно загружен");
        isModified = false;

        ui->rB_loadFromFile->setChecked(0);
    }

    else
        QMessageBox::warning(this, "Load from file", "Ошибка при загрузке файла");
}


void MainWindow::on_rB_changePath_clicked()
{
    QString newPATH = QFileDialog::getSaveFileName(this, "Выберите путь файла", "", "JSON Files (*.json)");

    if (!newPATH.isEmpty()) {
        PATH = newPATH;
        QMessageBox::information(this, "Change path", "Путь к файлу успешно изменен");

        ui->rB_changePath->setChecked(0);
    }
}


void MainWindow::closeEvent(QCloseEvent *event)
{
    if (!isModified) {
        event->accept();
        return;
    }


    if (QMessageBox::question(this, "Close confirm", "Вы уверены, что не хотите сохранить результаты?", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
        event->accept();
    else {
        FileManager filemanager;

        if (filemanager.saveToFile(PATH, inventory)) {
            QMessageBox::information(this, "Save in file", "Инвентарь сохранен успешно");
            event->accept();
        }
        else {
            QMessageBox::warning(this, "Save in file", "Ошибка при сохранении файла");
            event->ignore();
        }
    }
}
