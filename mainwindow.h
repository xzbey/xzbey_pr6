#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inventorymanager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pB_add_clicked(); //Добавление предмета в таблицу

    void on_pB_del_clicked(); //Удаление предмета из таблицы

    void on_pB_change_clicked(); //Изменение предмета

    void on_rB_name_clicked(); //Сортировка по имени

    void on_rB_rarity_clicked(); //Сортировка по редкости

    void on_rB_category_clicked(); //Сортировка по категории

    void on_rB_type_clicked(); //Сортировка по типу

    void on_rB_durability_clicked(); //Сортировка по прочности

    void on_rB_weight_clicked(); //Сортировка по весу

    void on_rB_attack_clicked(); //Сортировка по урону

    void on_rB_defense_clicked(); //Сортировка по защите

    void on_pB_statistic_clicked(); //Получение статистики предметов

    void on_pB_open_searchdialog_clicked(); //Открытие диалогового окна с поиском предметов по заданным характеристикам

    void on_pB_clearHighlights_clicked(); //Очистка выделений

    void on_rB_saveToFile_clicked(); //Сохранение в json файл

    void on_rB_loadFromFile_clicked(); //Загрузка из json файла

    void on_rB_changePath_clicked(); //Смена пути к json файлу для сохранения/загрузки

private:
    InventoryManager inventory; //Инвентарь

    QString PATH; //Путь к Json файлу

    bool isModified; //Проверка на то, изменен ли инвентарь

    Ui::MainWindow *ui;

    void place_element(GameItem* item); //Добавление элемента в таблицу
    void place_all(); //Добавление всего инвентаря в таблицу

    int sumStatistic(int index); //Критерий статистики: суммарный
    int minStatistic(int index); //Критерий статистики: минимальный
    int maxStatistic(int index); //Критерий статистики: максимальный
    float midStatistic(int index); //Критерий статистики: усредненный

    void highlightResults(const std::vector<int>& indexes); //Выделение цветом предметов в таблице
    void clearHighlights(); //Очистка выделений предметов в таблице

protected:
    void closeEvent(QCloseEvent *event) override; //Переопределение метода закрытия программы на доп проверку сохранения инвертаря

};
#endif // MAINWINDOW_H
