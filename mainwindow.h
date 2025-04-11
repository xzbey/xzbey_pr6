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

private:
    InventoryManager inventory;


    Ui::MainWindow *ui;


    void place_element(GameItem* item);
};
#endif // MAINWINDOW_H
