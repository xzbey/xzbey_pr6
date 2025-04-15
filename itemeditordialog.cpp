#include "itemeditordialog.h"
#include "ui_itemeditordialog.h"
#include <QMessageBox>

ItemEditorDialog::ItemEditorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ItemEditorDialog)
{
    ui->setupUi(this);

    ui->checkBox_name->setChecked(0);
    ui->checkBox_rarity->setChecked(0);
    ui->checkBox_type->setChecked(0);
    ui->checkBox_durability->setChecked(0);
    ui->checkBox_weight->setChecked(0);
    ui->checkBox_attack->setChecked(0);
    ui->checkBox_defense->setChecked(0);

    ui->lE_name->setEnabled(0);
    ui->cB_rarity->setEnabled(0);
    ui->sB_durability->setEnabled(0);
    ui->sB_weight->setEnabled(0);
    ui->sB_attack->setEnabled(0);
    ui->sB_defense->setEnabled(0);

    updateComboBoxes();
    updateFields();
}

ItemEditorDialog::~ItemEditorDialog()
{
    delete ui;
}

//------------------------------------------

void ItemEditorDialog::updateComboBoxes() {
    bool typeEnabled = ui->checkBox_type->isChecked();

    ui->rB_weaponType->setEnabled(typeEnabled);
    ui->rB_armorType->setEnabled(typeEnabled);
    ui->rB_accessoriesType->setEnabled(typeEnabled);
    ui->rB_otherType->setEnabled(typeEnabled);

    ui->cB_weapon->setEnabled(typeEnabled and ui->rB_weaponType->isChecked());
    ui->cB_armor->setEnabled(typeEnabled and ui->rB_armorType->isChecked());
    ui->cB_accessories->setEnabled(typeEnabled and ui->rB_accessoriesType->isChecked());
    ui->cB_other->setEnabled(typeEnabled and ui->rB_otherType->isChecked());
}

void ItemEditorDialog::updateFields() {
    ui->checkBox_attack->setEnabled(ui->rB_weaponType->isChecked());
    ui->sB_attack->setEnabled(ui->checkBox_attack->isChecked() and ui->rB_weaponType->isChecked());
    ui->checkBox_attack->setChecked(ui->rB_weaponType->isChecked());


    ui->checkBox_defense->setEnabled(ui->rB_armorType->isChecked());
    ui->sB_defense->setEnabled(ui->checkBox_defense->isChecked() and ui->rB_armorType->isChecked());
    ui->checkBox_defense->setChecked(ui->rB_armorType->isChecked());
}

//------------------------------------------

QString ItemEditorDialog::getName() const {
    return ui->lE_name->text();
}

QString ItemEditorDialog::getRarity() const{
    return ui->cB_rarity->currentText();
}

QString ItemEditorDialog::getCategory() const {
    if (ui->rB_weaponType->isChecked())
        return "Weapon";

    else if (ui->rB_armorType->isChecked())
        return "Armor";

    else if (ui->rB_accessoriesType->isChecked())
        return "Accessories";

    else
        return "Other";
}

QString ItemEditorDialog::getType() const {
    if (ui->rB_weaponType->isChecked())
        return ui->cB_weapon->currentText();

    else if (ui->rB_armorType->isChecked())
        return ui->cB_armor->currentText();

    else if (ui->rB_accessoriesType->isChecked())
        return ui->cB_accessories->currentText();

    else if (ui->rB_otherType->isChecked())
        return ui->cB_other->currentText();

    return "nothing";
}

int ItemEditorDialog::getDurability() const {
    return ui->sB_durability->value();
}

int ItemEditorDialog::getWeight() const {
    return ui->sB_weight->value();
}

int ItemEditorDialog::getAttack() const {
    return ui->sB_attack->value();
}

int ItemEditorDialog::getDefense() const {
    return ui->sB_defense->value();
}

//------------------------------------------

void ItemEditorDialog::setName(QString name) {
    ui->lE_name->setText(name);
    ui->checkBox_name->setChecked(!name.isEmpty());
}

void ItemEditorDialog::setRarity(QString rarity) {
    if (!rarity.isEmpty())
        ui->cB_rarity->setCurrentText(rarity);
    else
        ui->checkBox_rarity->setChecked(0);
}

void ItemEditorDialog::setCategory(QString category) {
    if (category == "Weapon")
        ui->rB_weaponType->setChecked(1);

    else if (category == "Armor")
        ui->rB_armorType->setChecked(1);

    else if (category == "Accessories")
        ui->rB_accessoriesType->setChecked(1);

    else
        ui->rB_otherType->setChecked(1);

    updateComboBoxes();
    updateFields();
}

void ItemEditorDialog::setType(QString type) {
    if (ui->cB_weapon->findText(type) != -1) {
        ui->rB_weaponType->setChecked(1);
        ui->cB_weapon->setCurrentText(type);
    }
    else if (ui->cB_armor->findText(type) != -1) {
        ui->rB_armorType->setChecked(1);
        ui->cB_armor->setCurrentText(type);
    }
    else if (ui->cB_accessories->findText(type) != -1) {
        ui->rB_accessoriesType->setChecked(1);
        ui->cB_accessories->setCurrentText(type);
    }
    else if (ui->cB_other->findText(type) != -1) {
        ui->rB_otherType->setChecked(1);
        ui->cB_other->setCurrentText(type);
    } else {
        ui->rB_otherType->setChecked(1);
        ui->cB_other->setCurrentIndex(0);
    }
    ui->checkBox_type->setChecked(!type.isEmpty());
    updateComboBoxes();

}

void ItemEditorDialog::setDurability(int durability) {
    ui->sB_durability->setValue(durability > 0 ? durability: 1);
    ui->checkBox_durability->setChecked(durability > 0);
}

void ItemEditorDialog::setWeight(int weight) {
    ui->sB_weight->setValue(weight > 0 ? weight: 1);
    ui->checkBox_weight->setChecked(weight > 0);
}

void ItemEditorDialog::setAttack(int attack) {
    ui->sB_attack->setValue(attack > 0 ? attack: 1);
    ui->checkBox_attack->setChecked(attack > 0);
}

void ItemEditorDialog::setDefense(int defense) {
    ui->sB_defense->setValue(defense > 0 ? defense: 1);
    ui->checkBox_defense->setChecked(defense > 0);
}

//------------------------------------------

bool ItemEditorDialog::isNameChecked() const {
    return ui->checkBox_name->isChecked();
}

bool ItemEditorDialog::isRarityChecked() const {
    return ui->checkBox_rarity->isChecked();
}

bool ItemEditorDialog::isTypeChecked() const {
    return ui->checkBox_type->isChecked();
}

bool ItemEditorDialog::isDurabilityChecked() const {
    return ui->checkBox_durability->isChecked();
}

bool ItemEditorDialog::isWeightChecked() const {
    return ui->checkBox_weight->isChecked();
}

bool ItemEditorDialog::isAttackChecked() const {
    return ui->checkBox_attack->isChecked();
}

bool ItemEditorDialog::isDefenseChecked() const {
    return ui->checkBox_defense->isChecked();
}

//------------------------------------------

void ItemEditorDialog::on_checkBox_name_toggled(bool checked)
{
    ui->lE_name->setEnabled(checked);
}


void ItemEditorDialog::on_checkBox_rarity_toggled(bool checked)
{
    ui->cB_rarity->setEnabled(checked);
}


void ItemEditorDialog::on_checkBox_type_toggled(bool checked)
{
    if (!checked) {
        ui->rB_weaponType->setChecked(0);
        ui->rB_armorType->setChecked(0);
        ui->rB_accessoriesType->setChecked(0);
        ui->rB_otherType->setChecked(1);

        ui->cB_weapon->setCurrentIndex(0);
        ui->cB_armor->setCurrentIndex(0);
        ui->cB_accessories->setCurrentIndex(0);
        ui->cB_other->setCurrentIndex(0);
    }

    updateComboBoxes();
}


void ItemEditorDialog::on_checkBox_durability_toggled(bool checked)
{
    ui->sB_durability->setEnabled(checked);
}


void ItemEditorDialog::on_checkBox_weight_toggled(bool checked)
{
    ui->sB_weight->setEnabled(checked);
}


void ItemEditorDialog::on_checkBox_attack_toggled(bool checked)
{
    ui->sB_attack->setEnabled(checked and ui->rB_weaponType->isChecked());
}


void ItemEditorDialog::on_checkBox_defense_toggled(bool checked)
{
    ui->sB_defense->setEnabled(checked and ui->rB_armorType->isChecked());
}


void ItemEditorDialog::on_rB_weaponType_toggled(bool checked)
{
    updateComboBoxes();
    updateFields();
}


void ItemEditorDialog::on_rB_armorType_toggled(bool checked)
{
    updateComboBoxes();
    updateFields();
}


void ItemEditorDialog::on_rB_accessoriesType_toggled(bool checked)
{
    updateComboBoxes();
    updateFields();
}


void ItemEditorDialog::on_rB_otherType_toggled(bool checked)
{
    updateComboBoxes();
    updateFields();
}


void ItemEditorDialog::on_buttonBox_accepted()
{
    if (isNameChecked() and getName().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Error", "Укажите имя предмета");
        return;
    }
    else if (isRarityChecked() and getRarity().isEmpty()) {
        QMessageBox::warning(this, "Error", "Укажите редкость предмета");
        return;
    }
    else if (isTypeChecked() and getType().isEmpty()) {
        QMessageBox::warning(this, "Error", "Укажите тип предмета");
        return;
    }
    else if (isDurabilityChecked() and getDurability() <= 0) {
        QMessageBox::warning(this, "Error", "Укажите прочность предмета");
        return;
    }
    else if (isWeightChecked() and getWeight() <= 0) {
        QMessageBox::warning(this, "Error", "Укажите вес предмета");
        return;
    }
    else if (isAttackChecked() and getAttack() <= 0 and ui->rB_weaponType->isChecked()) {
        QMessageBox::warning(this, "Error", "Укажите урон предмета");
        return;
    }
    else if (isDefenseChecked() and getDefense() <= 0 and ui->rB_armorType->isChecked()) {
        QMessageBox::warning(this, "Error", "Укажите защиту предмета");
        return;
    }
    QDialog::accept();
}

