#ifndef GAMEITEM_H
#define GAMEITEM_H

#include <QString>
#include <QDebug>

class GameItem {
private:
    QString name, rarity, category, type;
    int durability, weight;
public:
    explicit GameItem(): name("item"), rarity("common"), category("Other"), type("-"), durability(0), weight(0) {}

    explicit GameItem(QString name, QString rarity, QString category, QString type, int durability, int weight):
        name(name), rarity(rarity), category(category), type(type), durability(durability), weight(weight) {
    qDebug() << "gameitem " + name + " created"; }

    virtual ~GameItem() {}


    QString getName() const;
    QString getRarity() const;
    QString getCategory() const;
    QString getType() const;
    int getDurability() const;
    int getWeight() const;


    void setName(QString name);
    void setRarity(QString rarity);
    void setCategory(QString category);
    void setType(QString type);
    void setDurability(int durability);
    void setWeight(int weight);
};

//inline GameItem::~GameItem() {}

class Weapon: public GameItem {
private:
    int damage;
public:
    explicit Weapon(): GameItem(), damage(0) {}

    explicit Weapon(QString name, QString rarity, QString type, int durability, int weight, int damage):
        GameItem(name, rarity, "Weapon", type, durability, weight), damage(damage) {
        qDebug() << "this been weapon";
    }

    int getDamage() const;

    void setDamage(int damage);
};


class Armor: public GameItem {
private:
    int defense;
public:
    explicit Armor(): GameItem(), defense(0) {}

    explicit Armor(QString name, QString rarity, QString type, int durability, int weight, int defense):
        GameItem(name, rarity, "Armor", type, durability, weight), defense(defense) {
        qDebug() << "this been armor";
    }

    int getDefense() const;

    void setDefense(int defense);
};


#endif // GAMEITEM_H
