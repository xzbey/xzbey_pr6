#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog; //Диалоговое окно поиска предметов с конкретными характеристиками
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();

    bool isDurabilityChecked(); //Проверка включен ли параметр прочности
    bool isWeightChecked(); //Проверка включен ли параметр веса
    bool isAttackChecked(); //Проверка включен ли параметр урона
    bool isDefenseChecked(); //Проверка включен ли параметр защиты

    int getMinDurability(); //Взятие минимальной прочности
    int getMaxDurability(); //Взятие максимальной прочности

    int getMinWeight(); //Взятие минимального веса
    int getMaxWeight(); //Взятие максимального веса

    int getMinAttack(); //Взятие минимального урона
    int getMaxAttack(); //Взятие максимального урона

    int getMinDefense(); //Взятие минимальной защиты
    int getMaxDefense(); //Взятие максимальной защиты

private slots:
    void on_checkBox_durability_toggled(bool checked); //Проверка включен ли checkBox прочности

    void on_checkBox_weight_toggled(bool checked); //Проверка включен ли checkBox веса

    void on_checkBox_attack_toggled(bool checked); //Проверка включен ли checkBox урона

    void on_checkBox_defense_toggled(bool checked); //Проверка включен ли checkBox защиты

    void on_buttonBox_accepted(); //Переопределение кнопки accept на доп проверку правильности критериев поиска

private:
    Ui::SearchDialog *ui;

    void updateFields(); //Зависимость включенности spinBox'ов от checkBox'ов каждого параметра
};

#endif // SEARCHDIALOG_H
