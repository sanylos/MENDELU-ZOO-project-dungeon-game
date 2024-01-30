
#include "MediumEnemyFactory.h"
Mutant* MediumEnemyFactory::getEasyMutant(){
    return new EasyMutant(20,25);
}
Mutant* MediumEnemyFactory::getMediumMutant(){
    return new MediumMutant(30,35);
}
Mutant* MediumEnemyFactory::getHardMutant(){
    return new HardMutant(40,45);
}
Mutant* MediumEnemyFactory::getSkeleton(){
    return new Skeleton(20,20);
}
