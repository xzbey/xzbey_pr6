#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "gameitem.h"


class InventoryManager { //Управление инвентарем
private:
    std::vector<std::unique_ptr<GameItem>> items; //Инвентарь
public:
    void addItem(std::unique_ptr<GameItem> item); //Добавление предмета

    void removeItem(int index); //Удаление предмета

    void editItem(int index, QString type_name, QString new_parametr); //Изменение QString параметра предмета

    void editItem(int index, QString type_name, int new_parametr);//Изменение int параметра предмета

    GameItem* getItem(int index); //Геттер получения предмета по индексу

    int getSize(); //Геттер размера инвентаря

    static bool sortByName(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по имени
    static bool sortByRarity(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по редкости
    static bool sortByCategory(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по категории
    static bool sortByType(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по типу
    static bool sortByDurability(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по прочности
    static bool sortByWeight(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по весу
    static bool sortByAttack(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по урону
    static bool sortByDefense(std::unique_ptr<GameItem>& item1, std::unique_ptr<GameItem>& item2); //Сортировка инвентаря по защите

    void sort(QString SORT_TYPE); //Сортировка инвентаря по типу сортировки

    std::vector<int> searchItems( //Поиск индексов предметов по заданным характеристикам
        bool checkDurability, int minDurability, int maxDurablity,
        bool checkWeight, int minWeight, int maxWeight,
        bool checkAttack, int minAttack, int maxAttack,
        bool checkDefense, int minDefenseMin, int maxDefense);
};

#endif // INVENTORYMANAGER_H
