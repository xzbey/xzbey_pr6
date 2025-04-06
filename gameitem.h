#ifndef GAMEITEM_H
#define GAMEITEM_H

#include <QString>

class GameItem {
private:
    QString name, rarity, type;
    int durability, weight;
public:
    explicit GameItem(): name("item"), rarity("common"), type("-"), durability(0), weight(0) {}

    explicit GameItem(QString name, QString rarity, QString type, int durability, int weight):
        name(name), rarity(rarity), type(type), durability(durability), weight(weight) {}

    virtual ~GameItem() = 0;


    QString getName() const;

    QString getRarity() const;

    QString getType() const;

    int getDurability() const;

    int getWeight() const;


    void setName(QString name);

    void setRarity(QString rarity);

    void setType(QString type);

    void setDurability(int durability);

    void setWeight(int weight);
};


class Weapon: public GameItem {
private:
    int damage;
public:
    explicit Weapon(): GameItem(), damage(0) {}

    explicit Weapon(QString name, QString rarity, QString type, int durability, int weight, int damage):
        GameItem(name, rarity, type, durability, weight), damage(damage) {}

    int getDamage() const;

    void setDamage(int damage);
};


class Armor: public GameItem {
private:
    int defense;
public:
    explicit Armor(): GameItem(), defense(0) {}

    explicit Armor(QString name, QString rarity, QString type, int durability, int weight, int defense):
        GameItem(name, rarity, type, durability, weight), defense(defense) {}

    int getDefense() const;

    void setDefense(int defense);
};


#endif // GAMEITEM_H
