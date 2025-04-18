/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *pB_add;
    QPushButton *pB_del;
    QPushButton *pB_change;
    QSpinBox *sB_del;
    QSpinBox *sB_change;
    QGroupBox *groupBox;
    QRadioButton *rB_name;
    QRadioButton *rB_rarity;
    QRadioButton *rB_category;
    QRadioButton *rB_type;
    QRadioButton *rB_durability;
    QRadioButton *rB_weight;
    QRadioButton *rB_attack;
    QRadioButton *rB_defense;
    QRadioButton *rB_nothing;
    QPushButton *pB_statistic;
    QComboBox *cB_characteristics_type;
    QComboBox *cB_statistic_type;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(812, 650);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 811, 421));
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        pB_add = new QPushButton(centralwidget);
        pB_add->setObjectName("pB_add");
        pB_add->setGeometry(QRect(70, 430, 80, 24));
        pB_del = new QPushButton(centralwidget);
        pB_del->setObjectName("pB_del");
        pB_del->setGeometry(QRect(260, 430, 91, 24));
        pB_change = new QPushButton(centralwidget);
        pB_change->setObjectName("pB_change");
        pB_change->setGeometry(QRect(530, 430, 91, 24));
        sB_del = new QSpinBox(centralwidget);
        sB_del->setObjectName("sB_del");
        sB_del->setGeometry(QRect(360, 430, 91, 21));
        sB_del->setMinimum(1);
        sB_del->setMaximum(100000);
        sB_change = new QSpinBox(centralwidget);
        sB_change->setObjectName("sB_change");
        sB_change->setGeometry(QRect(630, 430, 91, 21));
        sB_change->setMinimum(1);
        sB_change->setMaximum(100000);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 470, 211, 131));
        rB_name = new QRadioButton(groupBox);
        rB_name->setObjectName("rB_name");
        rB_name->setGeometry(QRect(10, 20, 91, 22));
        rB_rarity = new QRadioButton(groupBox);
        rB_rarity->setObjectName("rB_rarity");
        rB_rarity->setGeometry(QRect(10, 40, 91, 22));
        rB_category = new QRadioButton(groupBox);
        rB_category->setObjectName("rB_category");
        rB_category->setGeometry(QRect(10, 60, 91, 22));
        rB_type = new QRadioButton(groupBox);
        rB_type->setObjectName("rB_type");
        rB_type->setGeometry(QRect(10, 80, 91, 22));
        rB_durability = new QRadioButton(groupBox);
        rB_durability->setObjectName("rB_durability");
        rB_durability->setGeometry(QRect(120, 20, 91, 22));
        rB_weight = new QRadioButton(groupBox);
        rB_weight->setObjectName("rB_weight");
        rB_weight->setGeometry(QRect(120, 40, 91, 22));
        rB_attack = new QRadioButton(groupBox);
        rB_attack->setObjectName("rB_attack");
        rB_attack->setGeometry(QRect(120, 60, 91, 22));
        rB_defense = new QRadioButton(groupBox);
        rB_defense->setObjectName("rB_defense");
        rB_defense->setGeometry(QRect(120, 80, 91, 22));
        rB_nothing = new QRadioButton(groupBox);
        rB_nothing->setObjectName("rB_nothing");
        rB_nothing->setGeometry(QRect(60, 100, 91, 22));
        rB_type->raise();
        rB_name->raise();
        rB_rarity->raise();
        rB_category->raise();
        rB_durability->raise();
        rB_weight->raise();
        rB_attack->raise();
        rB_defense->raise();
        rB_nothing->raise();
        pB_statistic = new QPushButton(centralwidget);
        pB_statistic->setObjectName("pB_statistic");
        pB_statistic->setGeometry(QRect(270, 490, 81, 41));
        cB_characteristics_type = new QComboBox(centralwidget);
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->setObjectName("cB_characteristics_type");
        cB_characteristics_type->setGeometry(QRect(360, 490, 81, 41));
        cB_statistic_type = new QComboBox(centralwidget);
        cB_statistic_type->addItem(QString());
        cB_statistic_type->addItem(QString());
        cB_statistic_type->addItem(QString());
        cB_statistic_type->addItem(QString());
        cB_statistic_type->setObjectName("cB_statistic_type");
        cB_statistic_type->setGeometry(QRect(450, 490, 81, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 812, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "rarity", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "category", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "type", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "durability", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "weight", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "attack", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "defense", nullptr));
        pB_add->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        pB_del->setText(QCoreApplication::translate("MainWindow", "del", nullptr));
        pB_change->setText(QCoreApplication::translate("MainWindow", "change", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        rB_name->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        rB_rarity->setText(QCoreApplication::translate("MainWindow", "rarity", nullptr));
        rB_category->setText(QCoreApplication::translate("MainWindow", "category", nullptr));
        rB_type->setText(QCoreApplication::translate("MainWindow", "type", nullptr));
        rB_durability->setText(QCoreApplication::translate("MainWindow", "durability", nullptr));
        rB_weight->setText(QCoreApplication::translate("MainWindow", "weight", nullptr));
        rB_attack->setText(QCoreApplication::translate("MainWindow", "attack", nullptr));
        rB_defense->setText(QCoreApplication::translate("MainWindow", "defense", nullptr));
        rB_nothing->setText(QCoreApplication::translate("MainWindow", "nothing", nullptr));
        pB_statistic->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        cB_characteristics_type->setItemText(0, QCoreApplication::translate("MainWindow", "durability", nullptr));
        cB_characteristics_type->setItemText(1, QCoreApplication::translate("MainWindow", "weight", nullptr));
        cB_characteristics_type->setItemText(2, QCoreApplication::translate("MainWindow", "attack", nullptr));
        cB_characteristics_type->setItemText(3, QCoreApplication::translate("MainWindow", "defense", nullptr));

        cB_statistic_type->setItemText(0, QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265", nullptr));
        cB_statistic_type->setItemText(1, QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265", nullptr));
        cB_statistic_type->setItemText(2, QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\320\276\320\265", nullptr));
        cB_statistic_type->setItemText(3, QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
