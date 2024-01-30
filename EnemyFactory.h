
#ifndef ZOO_PROJEKT_HRA_20_ENEMYFACTORY_H
#define ZOO_PROJEKT_HRA_20_ENEMYFACTORY_H
#include "Mutant.h"
/*
 * Abstraktni tovarná ktera obsahuje čistě virtualní metodu pro vytvarení enemy
 */
class EnemyFactory {
public:
    virtual Mutant* getEasyMutant() = 0;
    virtual Mutant* getMediumMutant() = 0;
    virtual Mutant* getHardMutant() = 0;
    virtual Mutant* getSkeleton() = 0;

};


#endif //ZOO_PROJEKT_HRA_20_ENEMYFACTORY_H
