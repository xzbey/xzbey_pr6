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

    void on_pB_open_searchdialog_clicked();

    void on_pB_clearHighlights_clicked();

    void on_rB_saveToFile_clicked();

    void on_rB_loadFromFile_clicked();

    void on_rB_changePath_clicked();

private:
    InventoryManager inventory;

    QString PATH;

    bool isModified;

    Ui::MainWindow *ui;

    void place_element(GameItem* item);
    void place_all();

    int sumStatistic(int index);
    int minStatistic(int index);
    int maxStatistic(int index);
    float midStatistic(int index);

    void highlightResults(const std::vector<int>& indexes);
    void clearHighlights();

protected:
    void closeEvent(QCloseEvent *event) override;

};
#endif // MAINWINDOW_H
