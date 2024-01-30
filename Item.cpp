#include "Item.h"
int Item::s_idOfItem=0;

Item::Item(std::string itemName, std::string itemType) {
    m_itemName = itemName;
    m_itemType = itemType;
    s_idOfItem+=1;
    m_idOfItem=s_idOfItem;
}

std::string Item::getItemName() {
 return m_itemName;
}

std::string Item::getItemType() {
    return m_itemType;
}

int Item::getIdOfItem() {
    return m_idOfItem;
}