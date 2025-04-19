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
#include <QtWidgets/QLabel>
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
    QGroupBox *groupBox_2;
    QRadioButton *rB_saveToFile;
    QRadioButton *rB_loadFromFile;
    QRadioButton *rB_changePath;
    QGroupBox *groupBox_3;
    QPushButton *pB_clearHighlights;
    QPushButton *pB_open_searchdialog;
    QGroupBox *groupBox_4;
    QLabel *label_index2;
    QPushButton *pB_change;
    QSpinBox *sB_change;
    QPushButton *pB_del;
    QPushButton *pB_add;
    QLabel *label_index1;
    QSpinBox *sB_del;
    QGroupBox *groupBox_5;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *cB_characteristics_type;
    QPushButton *pB_statistic;
    QComboBox *cB_statistic_type;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(831, 694);
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
        tableWidget->setGeometry(QRect(0, 0, 831, 421));
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(270, 440, 111, 221));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        rB_name = new QRadioButton(groupBox);
        rB_name->setObjectName("rB_name");
        rB_name->setGeometry(QRect(20, 30, 91, 22));
        rB_rarity = new QRadioButton(groupBox);
        rB_rarity->setObjectName("rB_rarity");
        rB_rarity->setGeometry(QRect(20, 50, 91, 22));
        rB_category = new QRadioButton(groupBox);
        rB_category->setObjectName("rB_category");
        rB_category->setGeometry(QRect(20, 70, 91, 22));
        rB_type = new QRadioButton(groupBox);
        rB_type->setObjectName("rB_type");
        rB_type->setGeometry(QRect(20, 90, 91, 22));
        rB_durability = new QRadioButton(groupBox);
        rB_durability->setObjectName("rB_durability");
        rB_durability->setGeometry(QRect(20, 110, 91, 22));
        rB_weight = new QRadioButton(groupBox);
        rB_weight->setObjectName("rB_weight");
        rB_weight->setGeometry(QRect(20, 130, 91, 22));
        rB_attack = new QRadioButton(groupBox);
        rB_attack->setObjectName("rB_attack");
        rB_attack->setGeometry(QRect(20, 150, 91, 22));
        rB_defense = new QRadioButton(groupBox);
        rB_defense->setObjectName("rB_defense");
        rB_defense->setGeometry(QRect(20, 170, 91, 22));
        rB_nothing = new QRadioButton(groupBox);
        rB_nothing->setObjectName("rB_nothing");
        rB_nothing->setGeometry(QRect(20, 190, 91, 22));
        rB_type->raise();
        rB_name->raise();
        rB_rarity->raise();
        rB_category->raise();
        rB_durability->raise();
        rB_weight->raise();
        rB_attack->raise();
        rB_defense->raise();
        rB_nothing->raise();
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(630, 550, 191, 111));
        groupBox_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        rB_saveToFile = new QRadioButton(groupBox_2);
        rB_saveToFile->setObjectName("rB_saveToFile");
        rB_saveToFile->setGeometry(QRect(10, 20, 141, 22));
        rB_saveToFile->setAutoExclusive(false);
        rB_loadFromFile = new QRadioButton(groupBox_2);
        rB_loadFromFile->setObjectName("rB_loadFromFile");
        rB_loadFromFile->setGeometry(QRect(10, 50, 121, 22));
        rB_loadFromFile->setAutoExclusive(false);
        rB_changePath = new QRadioButton(groupBox_2);
        rB_changePath->setObjectName("rB_changePath");
        rB_changePath->setGeometry(QRect(10, 80, 141, 22));
        rB_changePath->setAutoExclusive(false);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(630, 440, 191, 111));
        groupBox_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pB_clearHighlights = new QPushButton(groupBox_3);
        pB_clearHighlights->setObjectName("pB_clearHighlights");
        pB_clearHighlights->setGeometry(QRect(10, 70, 171, 31));
        pB_open_searchdialog = new QPushButton(groupBox_3);
        pB_open_searchdialog->setObjectName("pB_open_searchdialog");
        pB_open_searchdialog->setGeometry(QRect(10, 30, 171, 31));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 440, 251, 221));
        groupBox_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_index2 = new QLabel(groupBox_4);
        label_index2->setObjectName("label_index2");
        label_index2->setGeometry(QRect(140, 160, 101, 21));
        label_index2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pB_change = new QPushButton(groupBox_4);
        pB_change->setObjectName("pB_change");
        pB_change->setGeometry(QRect(10, 170, 111, 41));
        sB_change = new QSpinBox(groupBox_4);
        sB_change->setObjectName("sB_change");
        sB_change->setGeometry(QRect(140, 180, 101, 31));
        sB_change->setMinimum(1);
        sB_change->setMaximum(1000000);
        pB_del = new QPushButton(groupBox_4);
        pB_del->setObjectName("pB_del");
        pB_del->setGeometry(QRect(10, 100, 111, 41));
        pB_add = new QPushButton(groupBox_4);
        pB_add->setObjectName("pB_add");
        pB_add->setGeometry(QRect(10, 30, 111, 41));
        label_index1 = new QLabel(groupBox_4);
        label_index1->setObjectName("label_index1");
        label_index1->setGeometry(QRect(140, 90, 101, 21));
        label_index1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sB_del = new QSpinBox(groupBox_4);
        sB_del->setObjectName("sB_del");
        sB_del->setGeometry(QRect(140, 110, 101, 31));
        sB_del->setMinimum(1);
        sB_del->setMaximum(1000000);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(390, 440, 231, 221));
        groupBox_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 90, 111, 41));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4->setWordWrap(true);
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 91, 41));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setWordWrap(true);
        cB_characteristics_type = new QComboBox(groupBox_5);
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->addItem(QString());
        cB_characteristics_type->setObjectName("cB_characteristics_type");
        cB_characteristics_type->setGeometry(QRect(110, 40, 111, 41));
        pB_statistic = new QPushButton(groupBox_5);
        pB_statistic->setObjectName("pB_statistic");
        pB_statistic->setGeometry(QRect(30, 150, 171, 51));
        cB_statistic_type = new QComboBox(groupBox_5);
        cB_statistic_type->addItem(QString());
        cB_statistic_type->addItem(QString());
        cB_statistic_type->addItem(QString());
        cB_statistic_type->addItem(QString());
        cB_statistic_type->setObjectName("cB_statistic_type");
        cB_statistic_type->setGeometry(QRect(110, 90, 111, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 831, 21));
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
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \321\204\320\260\320\271\320\273\320\276\320\274", nullptr));
        rB_saveToFile->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        rB_loadFromFile->setText(QCoreApplication::translate("MainWindow", "\320\262\320\267\321\217\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        rB_changePath->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\277\321\203\321\202\321\214 \321\204\320\260\320\271\320\273\320\260", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        pB_clearHighlights->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        pB_open_searchdialog->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\260\320\261\320\276\321\200\320\276\320\274 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_index2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\265\320\272\321\201 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260", nullptr));
        pB_change->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        pB_del->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        pB_add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label_index1->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\265\320\272\321\201 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\262\320\276\320\264\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\320\276\320\270\321\201\320\272\320\260\n"
"\320\235\320\260\320\271\321\202\320\270 * \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270", nullptr));
        cB_characteristics_type->setItemText(0, QCoreApplication::translate("MainWindow", "durability", nullptr));
        cB_characteristics_type->setItemText(1, QCoreApplication::translate("MainWindow", "weight", nullptr));
        cB_characteristics_type->setItemText(2, QCoreApplication::translate("MainWindow", "attack", nullptr));
        cB_characteristics_type->setItemText(3, QCoreApplication::translate("MainWindow", "defense", nullptr));

        pB_statistic->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203", nullptr));
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
