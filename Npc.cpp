//
// Created by NTB-BO-01 on 22.01.2024.
//

#include "Npc.h"
Npc::Npc(){}
void Npc::welcome(){
    std::cout<<"Hello, I heard that you were called a dragon slayer, so I think you will be able to help our village."<<std::endl
              << " Our village and its surroundings were invaded by various monsters that separated all the villagers. "<<std::endl
                 <<"So who, if not you, will free us"<<std::endl;
}
void Npc::comunicateAboutFirstQuest(bool &state){
    int rozhodnuti1;
    char quit;
    std::cout<<"[1] Yes i can help you,what i need to do?"<<std::endl
    <<"[2] Sorry but i can't"<<std::endl;
    std::cin>>rozhodnuti1;
    if(rozhodnuti1!=1 and rozhodnuti1!=2){
        std::cin>>rozhodnuti1;
    }
    if(rozhodnuti1==1){
        std::cout<<"First of all, before you get to the labyrinth, there are two monsters 'M' at its entrance, "
                   "which prevent people from passing and rob them, I think you can handle them,Good luck"<<std::endl;
        std::cout<<"[q] Quit"<<std::endl;
        std::cin>>quit;
    }else if(rozhodnuti1==2){
        state = false;
        std::cout<<"All hopes were only on you"<<std::endl;
    }
}
void Npc::comunicateAboutSecondQuest(){
    char quit;
    std::cout<<"So you're not as bad as I thought at first, those monsters at the entrance tormented us for a long time. "<<std::endl
    <<"Well, now in this labyrinth you have to find the treasure '$', "
      "but at the exit you will also find a monster 'W' guarding this treasure, good luck"<<std::endl;
    std::cout<<"[q] Quit"<<std::endl;
    std::cin>>quit;
}
void Npc::comunicateAboutThirdQuest(){
    char quit;
std::cout<<"I see that you found a sword, and I also see that you fought with a monster, because you don't look very good. "
           "The main dragon is waiting for you ahead, but you definitely won't have enough strength to overcome it. "
           "But there is a legend that you can find an elixir in the old cemetery which will give you strength. "
           "Good luck"<<std::endl;
    std::cout<<"[q] Quit"<<std::endl;
    std::cin>>quit;
}
void Npc::finalComunicate(){
   char quit;
   std::cout<<"I can't believe my eyes, you did it! They kept us in fear for half a century. "
              "You will go down in human history as the bravest dragon slayer"<<std::endl;
}


