cmake_minimum_required(VERSION 3.26)
project(zoo_projekt_hra_20)

set(CMAKE_CXX_STANDARD 17)

add_executable(zoo_projekt_hra_20 main.cpp
        Menu.cpp
        Menu.h
        Player.cpp
        Player.h
        Inventory.cpp
        Inventory.h
        Room.cpp
        Room.h
        GameCoordinator.cpp
        GameCoordinator.h
        Item.cpp
        Item.h
        Potion.cpp
        Potion.h
        Weapon.h
        Weapon.cpp
        EasyEnemyFactory.cpp
        EasyMutant.cpp
        HardEnemyFactory.cpp
        HardMutant.cpp
        MediumEnemyFactory.cpp
        MediumMutant.cpp
        Mutant.cpp
        Quests.cpp
        Quests.h
        Level.h
        Level.cpp
        CombatManager.h
        CombatManager.cpp
        Npc.h
        Npc.cpp
        Skeleton.h
        Skeleton.cpp

)
