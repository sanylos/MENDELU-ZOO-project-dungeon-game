#ifndef ZOO_PROJEKT_HRA_20_POTION_H
#define ZOO_PROJEKT_HRA_20_POTION_H
#include "Item.h"
#include "Player.h"
/*
 *Instance třidy Potion(typ itemu)
 */
class Potion: public Item{
    int m_healthBonus;
public:
    Potion(std::string name,std::string type,int healthBonus);
    int getHealthBonus();
    //overridnuta metoda pomoci ktere hrač vypije potion a jeho zdravi se zvyší pokud nebude vic než 100
    void useItem(Player &player);
};


#endif //ZOO_PROJEKT_HRA_20_POTION_H
