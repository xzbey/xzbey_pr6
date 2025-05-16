#ifndef ITEMEDITORDIALOG_H
#define ITEMEDITORDIALOG_H

#include <QDialog>
#include <QString>
#include "gameitem.h"

namespace Ui {
class ItemEditorDialog; //Диалоговое окно с изменением всех нужных характеристик предмета
}

class ItemEditorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ItemEditorDialog(QWidget *parent = nullptr);
    ~ItemEditorDialog();

    QString getName() const; //Геттер имени
    QString getRarity() const; //Геттер редкости
    QString getCategory() const; //Геттер категории
    QString getType() const; //Геттер типа предмета
    int getDurability() const; //Геттер прочности
    int getWeight() const; //Геттер веса
    int getAttack() const; //Геттер урона
    int getDefense() const; //Геттер защиты

    void setName(QString name); //Сеттер имени
    void setRarity(QString rarity); //Сеттер редкости
    void setCategory(QString category); //Сеттер категории
    void setType(QString type); //Сеттер типа предмета
    void setDurability(int durability); //Сеттер прочности
    void setWeight(int weight); //Сеттер веса
    void setAttack(int attack); //Сеттер урона
    void setDefense(int defense); //Сеттер защиты

    bool isNameChecked() const; //Проверка включен ли checkBox имени
    bool isRarityChecked() const; //Проверка включен ли checkBox редкости
    bool isTypeChecked() const; //Проверка включен ли checkBox типа
    bool isDurabilityChecked() const; //Проверка включен ли checkBox прочности
    bool isWeightChecked() const; //Проверка включен ли checkBox веса
    bool isAttackChecked() const; //Проверка включен ли checkBox урона
    bool isDefenseChecked() const; //Проверка включен ли checkBox защиты

private slots:
    void on_checkBox_name_toggled(bool checked); //Включение поля ввода для имени

    void on_checkBox_rarity_toggled(bool checked); //Включение поля ввода для редкости

    void on_checkBox_type_toggled(bool checked); //Включение поля ввода для типа

    void on_checkBox_durability_toggled(bool checked); //Включение поля ввода для прочности

    void on_checkBox_weight_toggled(bool checked); //Включение поля ввода для веса

    void on_checkBox_attack_toggled(bool checked); //Включение поля ввода для урона

    void on_checkBox_defense_toggled(bool checked); //Включение поля ввода для защиты

    void on_rB_weaponType_toggled(bool checked); //Смена типа предмета на оружие и открытие comboBox'ов выбора типа предмета

    void on_rB_armorType_toggled(bool checked); //Смена типа предмета на броню и открытие comboBox'ов выбора типа предмета

    void on_rB_accessoriesType_toggled(bool checked); //Смена типа предмета на аксессуар и открытие comboBox'ов выбора типа предмета

    void on_rB_otherType_toggled(bool checked); //Смена типа предмета на "другое" и открытие comboBox'ов выбора типа предмета

    void on_buttonBox_accepted(); //Переопределение метода accept для доп проверки введенных данных

private:
    Ui::ItemEditorDialog *ui;

    void updateComboBoxes(); //Включение/выключение comboBox'ов

    void updateFields(); //Включение/выключение ввода характеристик для урона (если категория - оружие) и защиты (если категория - броня)
};

#endif // ITEMEDITORDIALOG_H
