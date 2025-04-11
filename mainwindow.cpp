#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


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
    ui->tableWidget->setItem(size, 2, new QTableWidgetItem(item->getType()));
    ui->tableWidget->setItem(size, 3, new QTableWidgetItem(QString::number(item->getDurability())));
    ui->tableWidget->setItem(size, 4, new QTableWidgetItem(QString::number(item->getWeight())));

    if (Weapon* weapon = dynamic_cast<Weapon*>(item)) {
        ui->tableWidget->setItem(size, 5, new QTableWidgetItem(QString::number(weapon->getDamage())));
        ui->tableWidget->setItem(size, 6, new QTableWidgetItem("0"));
    }

    else if (Armor* armor = dynamic_cast<Armor*>(item)) {
        ui->tableWidget->setItem(size, 6, new QTableWidgetItem(QString::number(armor->getDefense())));
        ui->tableWidget->setItem(size, 5, new QTableWidgetItem("0"));
    } else {
        ui->tableWidget->setItem(size, 5, new QTableWidgetItem("0"));
        ui->tableWidget->setItem(size, 6, new QTableWidgetItem("0"));
    }

}


void MainWindow::on_pB_add_clicked()
{
    inventory.addItem(std::make_unique<Weapon>("Sword", "rare", "melee", 100, 5, 50));

    place_element(inventory.getItem(inventory.getSize() - 1));

    inventory.addItem(std::make_unique<Armor>("Shield", "common", "protection", 200, 10, 30));

    //qDebug() << inventory.getItem(0)->getName(), inventory.getItem(0)->getWeight();

    place_element(inventory.getItem(inventory.getSize() - 1));

    inventory.addItem(std::make_unique<GameItem>("Potion", "uncommon", "consumable", 1, 1));
    place_element(inventory.getItem(inventory.getSize() - 1));


}




void MainWindow::on_pB_del_clicked()
{
    int index = ui->sB_del->value() - 1;

    if (index >= inventory.getSize())
        return;

    inventory.removeItem(index);

    ui->tableWidget->removeRow(index);
}

