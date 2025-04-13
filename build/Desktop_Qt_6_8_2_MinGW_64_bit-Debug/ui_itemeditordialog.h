/********************************************************************************
** Form generated from reading UI file 'itemeditordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMEDITORDIALOG_H
#define UI_ITEMEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ItemEditorDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox_name;
    QCheckBox *checkBox_rarity;
    QCheckBox *checkBox_type;
    QCheckBox *checkBox_durability;
    QCheckBox *checkBox_weight;
    QCheckBox *checkBox_attack;
    QCheckBox *checkBox_defense;
    QLineEdit *lE_name;
    QComboBox *cB_rarity;
    QSpinBox *sB_durability;
    QSpinBox *sB_weight;
    QSpinBox *sB_attack;
    QSpinBox *sB_defense;
    QGroupBox *groupBox_type;
    QRadioButton *rB_otherType;
    QRadioButton *rB_accessoriesType;
    QRadioButton *rB_armorType;
    QRadioButton *rB_weaponType;
    QComboBox *cB_weapon;
    QComboBox *cB_armor;
    QComboBox *cB_accessories;
    QComboBox *cB_other;

    void setupUi(QDialog *ItemEditorDialog)
    {
        if (ItemEditorDialog->objectName().isEmpty())
            ItemEditorDialog->setObjectName("ItemEditorDialog");
        ItemEditorDialog->resize(500, 538);
        buttonBox = new QDialogButtonBox(ItemEditorDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(100, 480, 381, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setKerning(true);
        buttonBox->setFont(font);
        buttonBox->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        checkBox_name = new QCheckBox(ItemEditorDialog);
        checkBox_name->setObjectName("checkBox_name");
        checkBox_name->setGeometry(QRect(10, 20, 78, 22));
        checkBox_rarity = new QCheckBox(ItemEditorDialog);
        checkBox_rarity->setObjectName("checkBox_rarity");
        checkBox_rarity->setGeometry(QRect(10, 60, 78, 22));
        checkBox_type = new QCheckBox(ItemEditorDialog);
        checkBox_type->setObjectName("checkBox_type");
        checkBox_type->setGeometry(QRect(10, 100, 78, 22));
        checkBox_durability = new QCheckBox(ItemEditorDialog);
        checkBox_durability->setObjectName("checkBox_durability");
        checkBox_durability->setGeometry(QRect(10, 280, 78, 22));
        checkBox_weight = new QCheckBox(ItemEditorDialog);
        checkBox_weight->setObjectName("checkBox_weight");
        checkBox_weight->setGeometry(QRect(10, 320, 78, 22));
        checkBox_attack = new QCheckBox(ItemEditorDialog);
        checkBox_attack->setObjectName("checkBox_attack");
        checkBox_attack->setGeometry(QRect(10, 360, 78, 22));
        checkBox_defense = new QCheckBox(ItemEditorDialog);
        checkBox_defense->setObjectName("checkBox_defense");
        checkBox_defense->setGeometry(QRect(10, 400, 78, 22));
        lE_name = new QLineEdit(ItemEditorDialog);
        lE_name->setObjectName("lE_name");
        lE_name->setGeometry(QRect(100, 20, 113, 24));
        cB_rarity = new QComboBox(ItemEditorDialog);
        cB_rarity->addItem(QString());
        cB_rarity->addItem(QString());
        cB_rarity->addItem(QString());
        cB_rarity->addItem(QString());
        cB_rarity->addItem(QString());
        cB_rarity->addItem(QString());
        cB_rarity->setObjectName("cB_rarity");
        cB_rarity->setGeometry(QRect(100, 60, 111, 21));
        sB_durability = new QSpinBox(ItemEditorDialog);
        sB_durability->setObjectName("sB_durability");
        sB_durability->setGeometry(QRect(100, 280, 111, 21));
        sB_durability->setMinimum(1);
        sB_durability->setMaximum(1000);
        sB_weight = new QSpinBox(ItemEditorDialog);
        sB_weight->setObjectName("sB_weight");
        sB_weight->setGeometry(QRect(100, 320, 111, 21));
        sB_weight->setMinimum(1);
        sB_weight->setMaximum(1000);
        sB_attack = new QSpinBox(ItemEditorDialog);
        sB_attack->setObjectName("sB_attack");
        sB_attack->setGeometry(QRect(100, 360, 111, 21));
        sB_attack->setMaximum(1000);
        sB_defense = new QSpinBox(ItemEditorDialog);
        sB_defense->setObjectName("sB_defense");
        sB_defense->setGeometry(QRect(100, 400, 111, 21));
        sB_defense->setMaximum(1000);
        groupBox_type = new QGroupBox(ItemEditorDialog);
        groupBox_type->setObjectName("groupBox_type");
        groupBox_type->setGeometry(QRect(100, 100, 120, 151));
        groupBox_type->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        rB_otherType = new QRadioButton(groupBox_type);
        rB_otherType->setObjectName("rB_otherType");
        rB_otherType->setGeometry(QRect(10, 120, 91, 22));
        rB_accessoriesType = new QRadioButton(groupBox_type);
        rB_accessoriesType->setObjectName("rB_accessoriesType");
        rB_accessoriesType->setGeometry(QRect(10, 90, 91, 22));
        rB_armorType = new QRadioButton(groupBox_type);
        rB_armorType->setObjectName("rB_armorType");
        rB_armorType->setGeometry(QRect(10, 60, 91, 22));
        rB_weaponType = new QRadioButton(groupBox_type);
        rB_weaponType->setObjectName("rB_weaponType");
        rB_weaponType->setGeometry(QRect(10, 30, 91, 22));
        cB_weapon = new QComboBox(ItemEditorDialog);
        cB_weapon->addItem(QString());
        cB_weapon->addItem(QString());
        cB_weapon->addItem(QString());
        cB_weapon->addItem(QString());
        cB_weapon->addItem(QString());
        cB_weapon->addItem(QString());
        cB_weapon->setObjectName("cB_weapon");
        cB_weapon->setGeometry(QRect(230, 110, 111, 21));
        cB_armor = new QComboBox(ItemEditorDialog);
        cB_armor->addItem(QString());
        cB_armor->addItem(QString());
        cB_armor->addItem(QString());
        cB_armor->addItem(QString());
        cB_armor->addItem(QString());
        cB_armor->addItem(QString());
        cB_armor->setObjectName("cB_armor");
        cB_armor->setGeometry(QRect(230, 150, 111, 21));
        cB_accessories = new QComboBox(ItemEditorDialog);
        cB_accessories->addItem(QString());
        cB_accessories->addItem(QString());
        cB_accessories->addItem(QString());
        cB_accessories->addItem(QString());
        cB_accessories->setObjectName("cB_accessories");
        cB_accessories->setGeometry(QRect(230, 190, 111, 21));
        cB_other = new QComboBox(ItemEditorDialog);
        cB_other->addItem(QString());
        cB_other->addItem(QString());
        cB_other->addItem(QString());
        cB_other->addItem(QString());
        cB_other->addItem(QString());
        cB_other->addItem(QString());
        cB_other->addItem(QString());
        cB_other->setObjectName("cB_other");
        cB_other->setGeometry(QRect(230, 230, 111, 21));

        retranslateUi(ItemEditorDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ItemEditorDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ItemEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *ItemEditorDialog)
    {
        ItemEditorDialog->setWindowTitle(QCoreApplication::translate("ItemEditorDialog", "Dialog", nullptr));
        checkBox_name->setText(QCoreApplication::translate("ItemEditorDialog", "name", nullptr));
        checkBox_rarity->setText(QCoreApplication::translate("ItemEditorDialog", "rarity", nullptr));
        checkBox_type->setText(QCoreApplication::translate("ItemEditorDialog", "type", nullptr));
        checkBox_durability->setText(QCoreApplication::translate("ItemEditorDialog", "durability", nullptr));
        checkBox_weight->setText(QCoreApplication::translate("ItemEditorDialog", "weight", nullptr));
        checkBox_attack->setText(QCoreApplication::translate("ItemEditorDialog", "attack", nullptr));
        checkBox_defense->setText(QCoreApplication::translate("ItemEditorDialog", "defense", nullptr));
        cB_rarity->setItemText(0, QCoreApplication::translate("ItemEditorDialog", "Common", nullptr));
        cB_rarity->setItemText(1, QCoreApplication::translate("ItemEditorDialog", "Uncommon", nullptr));
        cB_rarity->setItemText(2, QCoreApplication::translate("ItemEditorDialog", "Rare", nullptr));
        cB_rarity->setItemText(3, QCoreApplication::translate("ItemEditorDialog", "Epic", nullptr));
        cB_rarity->setItemText(4, QCoreApplication::translate("ItemEditorDialog", "Legendary", nullptr));
        cB_rarity->setItemText(5, QCoreApplication::translate("ItemEditorDialog", "Mythic", nullptr));

        groupBox_type->setTitle(QCoreApplication::translate("ItemEditorDialog", "type", nullptr));
        rB_otherType->setText(QCoreApplication::translate("ItemEditorDialog", "other", nullptr));
        rB_accessoriesType->setText(QCoreApplication::translate("ItemEditorDialog", "accessories", nullptr));
        rB_armorType->setText(QCoreApplication::translate("ItemEditorDialog", "armor", nullptr));
        rB_weaponType->setText(QCoreApplication::translate("ItemEditorDialog", "weapon", nullptr));
        cB_weapon->setItemText(0, QCoreApplication::translate("ItemEditorDialog", "Sword", nullptr));
        cB_weapon->setItemText(1, QCoreApplication::translate("ItemEditorDialog", "Axe", nullptr));
        cB_weapon->setItemText(2, QCoreApplication::translate("ItemEditorDialog", "Bow", nullptr));
        cB_weapon->setItemText(3, QCoreApplication::translate("ItemEditorDialog", "Staff", nullptr));
        cB_weapon->setItemText(4, QCoreApplication::translate("ItemEditorDialog", "Dagger", nullptr));
        cB_weapon->setItemText(5, QCoreApplication::translate("ItemEditorDialog", "Hammer", nullptr));

        cB_armor->setItemText(0, QCoreApplication::translate("ItemEditorDialog", "Helmet", nullptr));
        cB_armor->setItemText(1, QCoreApplication::translate("ItemEditorDialog", "Chestplate", nullptr));
        cB_armor->setItemText(2, QCoreApplication::translate("ItemEditorDialog", "Leggings", nullptr));
        cB_armor->setItemText(3, QCoreApplication::translate("ItemEditorDialog", "Boots", nullptr));
        cB_armor->setItemText(4, QCoreApplication::translate("ItemEditorDialog", "Gauntlets", nullptr));
        cB_armor->setItemText(5, QCoreApplication::translate("ItemEditorDialog", "Shield", nullptr));

        cB_accessories->setItemText(0, QCoreApplication::translate("ItemEditorDialog", "Ring", nullptr));
        cB_accessories->setItemText(1, QCoreApplication::translate("ItemEditorDialog", "Amulet", nullptr));
        cB_accessories->setItemText(2, QCoreApplication::translate("ItemEditorDialog", "Bracelet", nullptr));
        cB_accessories->setItemText(3, QCoreApplication::translate("ItemEditorDialog", "Cloak", nullptr));

        cB_other->setItemText(0, QCoreApplication::translate("ItemEditorDialog", "Potion", nullptr));
        cB_other->setItemText(1, QCoreApplication::translate("ItemEditorDialog", "Scroll", nullptr));
        cB_other->setItemText(2, QCoreApplication::translate("ItemEditorDialog", "Food", nullptr));
        cB_other->setItemText(3, QCoreApplication::translate("ItemEditorDialog", "Key", nullptr));
        cB_other->setItemText(4, QCoreApplication::translate("ItemEditorDialog", "Tool", nullptr));
        cB_other->setItemText(5, QCoreApplication::translate("ItemEditorDialog", "Material", nullptr));
        cB_other->setItemText(6, QCoreApplication::translate("ItemEditorDialog", "Health Kit", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ItemEditorDialog: public Ui_ItemEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMEDITORDIALOG_H
