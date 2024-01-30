#ifndef ZOO_PROJEKT_HRA_20_ITEM_H
#define ZOO_PROJEKT_HRA_20_ITEM_H

#include <iostream>
#include "Player.h"
/*
 *Cllas inicializuje Itemy(predmety ktere muze hrac uchovavat v inventari)
 */
class Item {
private:
    std::string m_itemName;
    std::string m_itemType;
    static int s_idOfItem;
    int m_idOfItem;
public:
    Item(std::string itemName, std::string itemType);
    std::string getItemName();
    std::string getItemType();
    int getIdOfItem();
    //Virtualni metoda volana kdyz se hrac pokusi item pouzit
    virtual void useItem(Player &player)=0;
};


#endif //ZOO_PROJEKT_HRA_20_ITEM_H
