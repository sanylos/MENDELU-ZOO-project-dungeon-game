
#ifndef ZOO_PROJEKT_HRA_20_HARDENEMYFACTORY_H
#define ZOO_PROJEKT_HRA_20_HARDENEMYFACTORY_H
#include "EnemyFactory.h"
#include "EasyMutant.h"
#include "MediumMutant.h"
#include "HardMutant.h"
#include "Skeleton.h"
/*
 * Class ktery služí pro vytvaření silné nepřitelé
 */
class HardEnemyFactory :public EnemyFactory{
public:
    Mutant* getEasyMutant();
    Mutant* getMediumMutant();
    Mutant* getHardMutant();
    Mutant* getSkeleton();
};


#endif //ZOO_PROJEKT_HRA_20_HARDENEMYFACTORY_H
