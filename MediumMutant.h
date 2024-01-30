
#ifndef ZOO_PROJEKT_HRA_20_MEDIUMMUTANT_H
#define ZOO_PROJEKT_HRA_20_MEDIUMMUTANT_H
#include "Mutant.h"
#include "Player.h"
/*
 * Class ktery dědí po classu mutant a implementuje pomirně silného mutanta
 */
class MediumMutant: public Mutant{
protected:
int m_power;
int m_health;
public:
MediumMutant(int power,int health);
int getAttack();
void doAttack(Player* player);
int getHealth();
void setHealth(int health);
};


#endif //ZOO_PROJEKT_HRA_20_MEDIUMMUTANT_H
