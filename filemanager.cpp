#include "filemanager.h"
#include "inventorymanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


bool FileManager::saveToFile(QString filepath, InventoryManager& inventory) {
    QJsonArray itemArray; QJsonObject itemObj;
    GameItem* item;

    for (int i = 0; i < inventory.getSize(); i++) {
        item = inventory.getItem(i);

        itemObj["name"] = item->getName();
        itemObj["rarity"] = item->getRarity();
        itemObj["category"] = item->getCategory();
        itemObj["type"] = item->getType();
        itemObj["durability"] = item->getDurability();
        itemObj["weight"] = item->getWeight();

        if (Weapon* weapon = dynamic_cast<Weapon*>(item))
            itemObj["attack"] = weapon->getDamage();

        else if (Armor* armor = dynamic_cast<Armor*>(item))
            itemObj["defense"] = armor->getDefense();

        itemArray.append(itemObj);
    }

    QJsonObject mainObj;
    mainObj["items"] = itemArray;

    QJsonDocument doc(mainObj);
    QFile file(filepath);

    if (!file.open(QIODevice::WriteOnly))
        return false;

    file.write(doc.toJson());
    file.close();
    return true;
}


bool FileManager::loadToFile(QString filepath, InventoryManager& inventory) {
    QFile file(filepath);

    if (!file.open(QIODevice::ReadOnly))
        return false;


    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());

    file.close();

    if (doc.isNull() or !doc.isObject())
        return false;

    QJsonObject mainObj = doc.object();
    QJsonArray itemArray = mainObj["items"].toArray();

    while (inventory.getSize() > 0)
        inventory.removeItem(0);


    QJsonObject itemObj; QString category; std::unique_ptr<GameItem> item;
    for (const QJsonValue& value: itemArray) {
        itemObj = value.toObject();
        category = itemObj["category"].toString();

        if (category == "Weapon") {
            item = std::make_unique<Weapon>(
                itemObj["name"].toString(),
                itemObj["rarity"].toString(),
                itemObj["type"].toString(),
                itemObj["durability"].toInt(),
                itemObj["weight"].toInt(),
                itemObj["attack"].toInt()
            );
        }

        else if (category == "Armor") {
            item = std::make_unique<Armor>(
                itemObj["name"].toString(),
                itemObj["rarity"].toString(),
                itemObj["type"].toString(),
                itemObj["durability"].toInt(),
                itemObj["weight"].toInt(),
                itemObj["defense"].toInt()
            );
        }

        else {
            item = std::make_unique<GameItem>(
                itemObj["name"].toString(),
                itemObj["rarity"].toString(),
                category,
                itemObj["type"].toString(),
                itemObj["durability"].toInt(),
                itemObj["weight"].toInt()
            );
        }

        inventory.addItem(std::move(item));
    }

    return true;
}
