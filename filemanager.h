#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "inventorymanager.h"
#include <QString>

class FileManager //Json файл - загрузка/сохранение
{
public:
    FileManager() = default;

    bool saveToFile(QString filepath, InventoryManager& inventory); //Сохранение инвентаря в файл

    bool loadToFile(QString filepath, InventoryManager& inventory); //Загрузка инвентаря из файла
};

#endif // FILEMANAGER_H
