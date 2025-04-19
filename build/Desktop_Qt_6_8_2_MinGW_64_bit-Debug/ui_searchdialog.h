/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox_durability;
    QCheckBox *checkBox_weight;
    QCheckBox *checkBox_attack;
    QCheckBox *checkBox_defense;
    QSpinBox *spinBox_durability;
    QSpinBox *spinBox_weight;
    QSpinBox *spinBox_attack;
    QSpinBox *spinBox_defense;
    QSpinBox *spinBox_durability_2;
    QSpinBox *spinBox_weight_2;
    QSpinBox *spinBox_attack_2;
    QSpinBox *spinBox_defense_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName("SearchDialog");
        SearchDialog->resize(324, 241);
        buttonBox = new QDialogButtonBox(SearchDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 190, 281, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        checkBox_durability = new QCheckBox(SearchDialog);
        checkBox_durability->setObjectName("checkBox_durability");
        checkBox_durability->setGeometry(QRect(20, 50, 78, 22));
        checkBox_weight = new QCheckBox(SearchDialog);
        checkBox_weight->setObjectName("checkBox_weight");
        checkBox_weight->setGeometry(QRect(20, 80, 78, 22));
        checkBox_attack = new QCheckBox(SearchDialog);
        checkBox_attack->setObjectName("checkBox_attack");
        checkBox_attack->setGeometry(QRect(20, 110, 78, 22));
        checkBox_defense = new QCheckBox(SearchDialog);
        checkBox_defense->setObjectName("checkBox_defense");
        checkBox_defense->setGeometry(QRect(20, 140, 78, 22));
        spinBox_durability = new QSpinBox(SearchDialog);
        spinBox_durability->setObjectName("spinBox_durability");
        spinBox_durability->setGeometry(QRect(120, 50, 81, 25));
        spinBox_durability->setMaximum(100000);
        spinBox_weight = new QSpinBox(SearchDialog);
        spinBox_weight->setObjectName("spinBox_weight");
        spinBox_weight->setGeometry(QRect(120, 80, 81, 25));
        spinBox_weight->setMaximum(100000);
        spinBox_attack = new QSpinBox(SearchDialog);
        spinBox_attack->setObjectName("spinBox_attack");
        spinBox_attack->setGeometry(QRect(120, 110, 81, 25));
        spinBox_attack->setMaximum(100000);
        spinBox_defense = new QSpinBox(SearchDialog);
        spinBox_defense->setObjectName("spinBox_defense");
        spinBox_defense->setGeometry(QRect(120, 140, 81, 25));
        spinBox_defense->setMaximum(100000);
        spinBox_durability_2 = new QSpinBox(SearchDialog);
        spinBox_durability_2->setObjectName("spinBox_durability_2");
        spinBox_durability_2->setGeometry(QRect(220, 50, 81, 25));
        spinBox_durability_2->setMaximum(100000);
        spinBox_weight_2 = new QSpinBox(SearchDialog);
        spinBox_weight_2->setObjectName("spinBox_weight_2");
        spinBox_weight_2->setGeometry(QRect(220, 80, 81, 25));
        spinBox_weight_2->setMaximum(100000);
        spinBox_attack_2 = new QSpinBox(SearchDialog);
        spinBox_attack_2->setObjectName("spinBox_attack_2");
        spinBox_attack_2->setGeometry(QRect(220, 110, 81, 25));
        spinBox_attack_2->setMaximum(100000);
        spinBox_defense_2 = new QSpinBox(SearchDialog);
        spinBox_defense_2->setObjectName("spinBox_defense_2");
        spinBox_defense_2->setGeometry(QRect(220, 140, 81, 25));
        spinBox_defense_2->setMaximum(100000);
        label = new QLabel(SearchDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 10, 81, 31));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(SearchDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 10, 91, 31));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(SearchDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 91, 31));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setWordWrap(true);

        retranslateUi(SearchDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SearchDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QCoreApplication::translate("SearchDialog", "Dialog", nullptr));
        checkBox_durability->setText(QCoreApplication::translate("SearchDialog", "durability", nullptr));
        checkBox_weight->setText(QCoreApplication::translate("SearchDialog", "weight", nullptr));
        checkBox_attack->setText(QCoreApplication::translate("SearchDialog", "attack", nullptr));
        checkBox_defense->setText(QCoreApplication::translate("SearchDialog", "defense", nullptr));
        label->setText(QCoreApplication::translate("SearchDialog", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("SearchDialog", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("SearchDialog", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
