//
// Created by NTB-BO-01 on 24.01.2024.
//

#ifndef ZOO_PROJEKT_HRA_20_SKELETON_H
#define ZOO_PROJEKT_HRA_20_SKELETON_H
#include "Mutant.h"
#include "iostream"
/*
 * Class ktery dědí po classu mutant a implementuje skeletona
 */
class Skeleton: public Mutant {
protected:
    int m_power;
    int m_health;
public:
    Skeleton(int power,int health);
    int getAttack();
    void doAttack(Player* player);
    int getHealth();
    void setHealth(int health);
};


#endif //ZOO_PROJEKT_HRA_20_SKELETON_H
