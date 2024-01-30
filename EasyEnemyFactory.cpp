
#include "EasyEnemyFactory.h"
Mutant* EasyEnemyFactory::getEasyMutant(){
    return new EasyMutant(15,20);
}
Mutant* EasyEnemyFactory::getMediumMutant(){
    return new MediumMutant(25,30);
}
Mutant* EasyEnemyFactory::getHardMutant(){
    return new HardMutant(35,40);
}
Mutant* EasyEnemyFactory::getSkeleton(){
    return new Skeleton(20,20);
}

