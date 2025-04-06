#include "gameitem.h"

QString GameItem::getName() const {
    return name;
}


QString GameItem::getType() const {
    return type;
}


QString GameItem::getRarity() const {
    return rarity;
}


int GameItem::getDurability() const {
    return durability;
}


int GameItem::getWeight() const {
    return weight;
}


int Weapon::getDamage() const {
    return damage;
}


int Armor::getDefense() const {
    return defense;
}


void GameItem::setName(QString name) {
    this->name = name;
}


void GameItem::setRarity(QString rarity) {
    this->rarity = rarity;
}


void GameItem::setType(QString type){
    this->type = type;
}


void GameItem::setDurability(int durability) {
    this->durability = durability;
}


void GameItem::setWeight(int weight) {
    this->weight = weight;
}


void Weapon::setDamage(int damage) {
    this->damage = damage;
}


void Armor::setDefense(int defense) {
    this->defense = defense;
}




