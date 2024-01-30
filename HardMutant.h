
#ifndef ZOO_PROJEKT_HRA_20_HARDMUTANT_H
#define ZOO_PROJEKT_HRA_20_HARDMUTANT_H
#include "Mutant.h"
#include "Player.h"
/*
 * Class ktery dědí po classu mutant a implementuje silného mutanta
 */
class HardMutant: public Mutant{
protected:
    int m_power;
    int m_health;
public:
    HardMutant(int power,int health);
    int getAttack();
    void doAttack(Player* player);
    int getHealth();
    void setHealth(int health);
};


#endif //ZOO_PROJEKT_HRA_20_HARDMUTANT_H
