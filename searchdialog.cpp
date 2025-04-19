#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QMessageBox>

SearchDialog::SearchDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchDialog)
{
    ui->setupUi(this);

    ui->spinBox_durability->setEnabled(0);
    ui->spinBox_durability_2->setEnabled(0);

    ui->spinBox_weight->setEnabled(0);
    ui->spinBox_weight_2->setEnabled(0);

    ui->spinBox_attack->setEnabled(0);
    ui->spinBox_attack_2->setEnabled(0);

    ui->spinBox_defense->setEnabled(0);
    ui->spinBox_defense_2->setEnabled(0);
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::on_checkBox_durability_toggled(bool checked)
{
    updateFields();
}


void SearchDialog::on_checkBox_weight_toggled(bool checked)
{
    updateFields();
}


void SearchDialog::on_checkBox_attack_toggled(bool checked)
{
    updateFields();
}


void SearchDialog::on_checkBox_defense_toggled(bool checked)
{
    updateFields();
}

//------------------------------------------

bool SearchDialog::isDurabilityChecked() {
    return ui->checkBox_durability->isChecked();
}

bool SearchDialog::isWeightChecked() {
    return ui->checkBox_weight->isChecked();
}

bool SearchDialog::isAttackChecked() {
    return ui->checkBox_attack->isChecked();
}

bool SearchDialog::isDefenseChecked() {
    return ui->checkBox_defense->isChecked();
}

//------------------------------------------

int SearchDialog::getMinDurability() {
    return ui->spinBox_durability->value();
}

int SearchDialog::getMaxDurability() {
    return ui->spinBox_durability_2->value();
}


int SearchDialog::getMinWeight() {
    return ui->spinBox_weight->value();
}

int SearchDialog::getMaxWeight() {
    return ui->spinBox_weight_2->value();
}


int SearchDialog::getMinAttack() {
    return ui->spinBox_attack->value();
}

int SearchDialog::getMaxAttack() {
    return ui->spinBox_attack_2->value();
}


int SearchDialog::getMinDefense() {
    return ui->spinBox_defense->value();
}

int SearchDialog::getMaxDefense() {
    return ui->spinBox_defense_2->value();
}

//------------------------------------------

void SearchDialog::updateFields() {
    ui->spinBox_durability->setEnabled(isDurabilityChecked());
    ui->spinBox_durability_2->setEnabled(isDurabilityChecked());

    ui->spinBox_weight->setEnabled(isWeightChecked());
    ui->spinBox_weight_2->setEnabled(isWeightChecked());

    ui->spinBox_attack->setEnabled(isAttackChecked());
    ui->spinBox_attack_2->setEnabled(isAttackChecked());

    ui->spinBox_defense->setEnabled(isDefenseChecked());
    ui->spinBox_defense_2->setEnabled(isDefenseChecked());
}

//------------------------------------------

void SearchDialog::on_buttonBox_accepted()
{
    if (!isDurabilityChecked() and !isWeightChecked() and !isAttackChecked() and !isDefenseChecked()) {
        QMessageBox::warning(this, "Error", "Выберите хотя бы одну характеристику");
        return;
    }

    if (isDurabilityChecked() and getMinDurability() > getMaxDurability()) {
        QMessageBox::warning(this, "Error", "Минимальная прочность > максимальной");
        return;
    }

    if (isWeightChecked() and getMinWeight() > getMaxWeight()) {
        QMessageBox::warning(this, "Error", "Минимальный вес > максимального");
        return;
    }

    if (isAttackChecked() and getMinAttack() > getMaxAttack()) {
        QMessageBox::warning(this, "Error", "Минимальная атака > максимальной");
        return;
    }

    if (isDefenseChecked() and getMinDefense() > getMaxDefense()) {
        QMessageBox::warning(this, "Error", "Минимальная защита > максимальной");
        return;
    }

    QDialog::accept();
}

