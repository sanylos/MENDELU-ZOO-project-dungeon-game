#include "HardEnemyFactory.h"
Mutant* HardEnemyFactory::getEasyMutant(){
    return new EasyMutant(25,30);
}
Mutant* HardEnemyFactory::getMediumMutant(){
    return new MediumMutant(35,40);
}
Mutant* HardEnemyFactory::getHardMutant(){
    return new HardMutant(45,50);
}
Mutant* HardEnemyFactory::getSkeleton(){
    return new Skeleton(20,25);
}
