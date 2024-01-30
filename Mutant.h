
#ifndef ZOO_PROJEKT_HRA_20_MUTANT_H
#define ZOO_PROJEKT_HRA_20_MUTANT_H
/*
 * Cllas implementuje mutatnta(typ nepřitelé) a obsahuje čistě virtualní metody
 */
#include "Player.h"
class Mutant {
    int m_health;
public:
    Mutant();
    virtual	int getAttack() = 0;
    virtual ~Mutant(){};
    //Virtualni metoda volana kdyz mutant bude bojovat
    virtual void doAttack(Player* player)=0;
    virtual int getHealth()=0;
   virtual void setHealth(int health)=0;
};


#endif //ZOO_PROJEKT_HRA_20_MUTANT_H
