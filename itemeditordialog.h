#ifndef ITEMEDITORDIALOG_H
#define ITEMEDITORDIALOG_H

#include <QDialog>
#include <QString>
#include "gameitem.h"

namespace Ui {
class ItemEditorDialog;
}

class ItemEditorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ItemEditorDialog(QWidget *parent = nullptr);
    ~ItemEditorDialog();

    QString getName() const;
    QString getRarity() const;
    QString getCategory() const;
    QString getType() const;
    int getDurability() const;
    int getWeight() const;
    int getAttack() const;
    int getDefense() const;

    void setName(QString name);
    void setRarity(QString rarity);
    void setCategory(QString category);
    void setType(QString type);
    void setDurability(int durability);
    void setWeight(int weight);
    void setAttack(int attack);
    void setDefense(int defense);

    bool isNameChecked() const;
    bool isRarityChecked() const;
    bool isTypeChecked() const;
    bool isDurabilityChecked() const;
    bool isWeightChecked() const;
    bool isAttackChecked() const;
    bool isDefenseChecked() const;

private slots:
    void on_checkBox_name_toggled(bool checked);

    void on_checkBox_rarity_toggled(bool checked);

    void on_checkBox_type_toggled(bool checked);

    void on_checkBox_durability_toggled(bool checked);

    void on_checkBox_weight_toggled(bool checked);

    void on_checkBox_attack_toggled(bool checked);

    void on_checkBox_defense_toggled(bool checked);

    void on_rB_weaponType_toggled(bool checked);

    void on_rB_armorType_toggled(bool checked);

    void on_rB_accessoriesType_toggled(bool checked);

    void on_rB_otherType_toggled(bool checked);

    void on_buttonBox_accepted();

private:
    Ui::ItemEditorDialog *ui;

    void updateComboBoxes();

    void updateFields();
};

#endif // ITEMEDITORDIALOG_H
