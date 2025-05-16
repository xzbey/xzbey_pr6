#ifndef GAMEITEM_H
#define GAMEITEM_H

#include <QString>
#include <QDebug>

class GameItem { //Предмет
private:
    QString name, rarity, category, type; //Характеристики предмета
    int durability, weight; //Характеристики предмета
public:
    //Констуктор, если параметры не заданы
    explicit GameItem(): name("item"), rarity("common"), category("Other"), type("-"), durability(0), weight(0) {}

    //Констуктор с заданными параметрами
    explicit GameItem(QString name, QString rarity, QString category, QString type, int durability, int weight):
        name(name), rarity(rarity), category(category), type(type), durability(durability), weight(weight) {
    qDebug() << "gameitem " + name + " created"; }

    virtual ~GameItem() {} //Виртуальный деструктор

    //Геттеры параметров предмета
    QString getName() const;
    QString getRarity() const;
    QString getCategory() const;
    QString getType() const;
    int getDurability() const;
    int getWeight() const;

    //Сеттеры параметров предмета
    void setName(QString name);
    void setRarity(QString rarity);
    void setCategory(QString category);
    void setType(QString type);
    void setDurability(int durability);
    void setWeight(int weight);

    static const QMap<QString, int> RarityPriority; //Словарь приоритетов редкости
};

//inline GameItem::~GameItem() {}

class Weapon: public GameItem { //Предмет - оружие
private:
    int damage; //Характеристика урона
public:
    //Констуктор, если параметры не заданы
    explicit Weapon(): GameItem(), damage(0) {}

    //Констуктор с заданными параметрами
    explicit Weapon(QString name, QString rarity, QString type, int durability, int weight, int damage):
        GameItem(name, rarity, "Weapon", type, durability, weight), damage(damage) {
        qDebug() << "this been weapon";
    }

    int getDamage() const; //Геттер урона

    void setDamage(int damage); //Сеттер урона
};


class Armor: public GameItem { //Предмет - броня
private:
    int defense; //Характеристика защиты
public:
    //Констуктор, если параметры не заданы
    explicit Armor(): GameItem(), defense(0) {}

    //Констуктор с заданными параметрами
    explicit Armor(QString name, QString rarity, QString type, int durability, int weight, int defense):
        GameItem(name, rarity, "Armor", type, durability, weight), defense(defense) {
        qDebug() << "this been armor";
    }

    int getDefense() const; //Геттер защиты

    void setDefense(int defense); //Сеттер защиты
};


#endif // GAMEITEM_H
