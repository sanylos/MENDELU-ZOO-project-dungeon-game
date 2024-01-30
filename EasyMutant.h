
#ifndef ZOO_PROJEKT_HRA_20_EASYMUTANT_H
#define ZOO_PROJEKT_HRA_20_EASYMUTANT_H
#include "Mutant.h"
#include "Player.h"
/*
 * Class ktery dědí po classu mutant a implementuje lehkého mutanta
 */
class EasyMutant : public Mutant{
protected:
    int m_power;
    int m_health;
public:
    EasyMutant(int power,int health);
    int getAttack() ;
    void doAttack(Player* player) ;
    int getHealth();
    void setHealth(int health);
};




#endif //ZOO_PROJEKT_HRA_20_EASYMUTANT_H
