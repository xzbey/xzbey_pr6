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
    void on_pB_add_clicked();

    void on_pB_del_clicked();

    void on_pB_change_clicked();

    void on_rB_name_clicked();

    void on_rB_rarity_clicked();

    void on_rB_category_clicked();

    void on_rB_type_clicked();

    void on_rB_durability_clicked();

    void on_rB_weight_clicked();

    void on_rB_attack_clicked();

    void on_rB_defense_clicked();

    void on_pB_statistic_clicked();

private:
    InventoryManager inventory;

    Ui::MainWindow *ui;

    void place_element(GameItem* item);
    void place_all();

    int sumStatistic(int index);
    int minStatistic(int index);
    int maxStatistic(int index);
    float midStatistic(int index);

};
#endif // MAINWINDOW_H
