#ifndef ZOO_PROJEKT_HRA_20_EASYENEMYFACTORY_H
#define ZOO_PROJEKT_HRA_20_EASYENEMYFACTORY_H
#include "EnemyFactory.h"
#include "EasyMutant.h"
#include "MediumMutant.h"
#include "HardMutant.h"
#include "Skeleton.h"
/*
 * Class ktery služí pro vytvaření slabé nepřitelé
 */
class EasyEnemyFactory:public EnemyFactory{
public:
        Mutant* getEasyMutant();
    Mutant* getMediumMutant();
    Mutant* getHardMutant();
    Mutant* getSkeleton();
};

#endif //ZOO_PROJEKT_HRA_20_EASYENEMYFACTORY_H
