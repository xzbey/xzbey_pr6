#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();

    bool isDurabilityChecked();
    bool isWeightChecked();
    bool isAttackChecked();
    bool isDefenseChecked();

    int getMinDurability();
    int getMaxDurability();

    int getMinWeight();
    int getMaxWeight();

    int getMinAttack();
    int getMaxAttack();

    int getMinDefense();
    int getMaxDefense();

private slots:
    void on_checkBox_durability_toggled(bool checked);

    void on_checkBox_weight_toggled(bool checked);

    void on_checkBox_attack_toggled(bool checked);

    void on_checkBox_defense_toggled(bool checked);

    void on_buttonBox_accepted();

private:
    Ui::SearchDialog *ui;

    void updateFields();
};

#endif // SEARCHDIALOG_H
