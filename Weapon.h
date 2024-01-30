#ifndef ZOO_PROJEKT_HRA_20_WEAPON_H
#define ZOO_PROJEKT_HRA_20_WEAPON_H
#include "Item.h"
/*
 *Instance třidy Weapon(typ itemu)
 */
class Weapon:public Item {
    int m_attackBonus;
public:
    Weapon(std::string name,std::string type,int attackBonus);
    int getAttackBonus();
    void setAttackBonus(int bonus);
    //ovveridnuta metoda ktera nastavuje zbran hraču a mění mu damage
    void useItem(Player &player);
};

#endif //ZOO_PROJEKT_HRA_20_WEAPON_H
