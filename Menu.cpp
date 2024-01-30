#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>

#include "Quests.h"
#include "Menu.h"
#include "GameCoordinator.h"

void Menu::PrintMenu(){

    system("Color 0B");
    std::cout << R"(
         ________            __                             __         ____
        /_  __/ /_  ___     / /  ___  ____ ____  ____  ____/ /  ____  / __/
         / / / __ \/ _ \   / /  / _ \/ __ `/ _ \/ __ \/ __  /  / __ \/ /_
        / / / / / /  __/  / /__/  __/ /_/ /  __/ / / / /_/ /  / /_/ / __/
       /_/ /_/ /_/\___/  /_____|___/\__, /\___/_/ /_/\__,_/   \____/_/
                                   /____/
         ________                        __   ____                                    __
        / ____/ /____  _________  ____ _/ /  / __ \_________ _____ _____  ____  _____/ /___ ___  _____  _____
       / __/ / __/ _ \/ ___/ __ \/ __ `/ /  / / / / ___/ __ `/ __ `/ __ \/ __ \/ ___/ / __ `/ / / / _ \/ ___/
      / /___/ /_/  __/ /  / / / / /_/ / /  / /_/ / /  / /_/ / /_/ / /_/ / / / (__  ) / /_/ / /_/ /  __/ /
     /_____/\__/\___/_/  /_/ /_/\__,_/_/  /_____/_/   \__,_/\__, /\____/_/ /_/____/_/\__,_/\__, /\___/_/
                                                           /____/                         /____/
                                                                                                    v0.3.1
    )" << '\n';

    std::cout << "\r\n" << std::endl;
    system("PAUSE");
    std::cout << "\r\n" << std::endl;

    system("CLS");
    system("Color 0B");

    do {
        std::cout << R"(


                               __  ___        _
                              /  |/  /____ _ (_)____     ____ ___   ___   ____   __  __
                             / /|_/ // __ `// // __ \   / __ `__ \ / _ \ / __ \ / / / /
                            / /  / // /_/ // // / / /  / / / / / //  __// / / // /_/ /
                           /_/  /_/ \__,_//_//_/ /_/  /_/ /_/ /_/ \___//_/ /_/ \__,_/


                                           1.  New game | Easy
                                           2.  New game | Medium
                                           3.  New game | Hard

                       _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

                                           4.  Quit



    )" "\n" << std::endl;

        std::cout << "To continue, select a number from the menu: ";
        std::cin >> m_menuChoose;

        while(cin.fail()){
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            std::cerr << "ERROR: You really trying to overflow int? HAHAHA..NICE TRY TROLL!" << std::endl;
            std::cout << "You need to choose number from the menu okay? Try it once again: ";
            std::cin >> m_menuChoose;
        }

        GameCoordinator gameCoordinator;

        switch (m_menuChoose) {
            case 1:
                gameCoordinator.startNewGame("easy");
                break;
            case 2:
                gameCoordinator.startNewGame("medium");
                break;
            case 3:
                gameCoordinator.startNewGame("hard");
                break;
            default:
                system("CLS");

                if (m_menuChoose != 4)
                {
                    std::cerr << "ERROR: You have chosen an invalid number!" << std::endl;
                }

                else if(m_menuChoose == 4){
                    std::cout << "INFO: Closing game!" << std::endl;
                }

                break;
        }
    } while (m_menuChoose != 4);

    std::cout << R"(
         ________            __                             __         ____
        /_  __/ /_  ___     / /  ___  ____ ____  ____  ____/ /  ____  / __/
         / / / __ \/ _ \   / /  / _ \/ __ `/ _ \/ __ \/ __  /  / __ \/ /_
        / / / / / /  __/  / /__/  __/ /_/ /  __/ / / / /_/ /  / /_/ / __/
       /_/ /_/ /_/\___/  /_____|___/\__, /\___/_/ /_/\__,_/   \____/_/
                                   /____/
         ________                        __   ____                                    __
        / ____/ /____  _________  ____ _/ /  / __ \_________ _____ _____  ____  _____/ /___ ___  _____  _____
       / __/ / __/ _ \/ ___/ __ \/ __ `/ /  / / / / ___/ __ `/ __ `/ __ \/ __ \/ ___/ / __ `/ / / / _ \/ ___/
      / /___/ /_/  __/ /  / / / / /_/ / /  / /_/ / /  / /_/ / /_/ / /_/ / / / (__  ) / /_/ / /_/ /  __/ /
     /_____/\__/\___/_/  /_/ /_/\__,_/_/  /_____/_/   \__,_/\__, /\____/_/ /_/____/_/\__,_/\__, /\___/_/
                                                           /____/                         /____/


                         Thank you for playing, hope to see you back soon Slayer!

    )" << '\n';
    system("PAUSE");
}

void Menu::PrintDeathScreen(){
    system("Color 0C");
    std::cout << R"(

        Villager: "Oh noo, that cannot be true. Our traveler did not make it to the end,
        that was our last chance.. what a tragedy. We need to escape from our village,
        immediately and save our lives!"

    )" "\n" << std::endl;

    std::cout << "\r\n" << std::endl;
    system("PAUSE");
    std::cout << "\r\n" << std::endl;

    system("CLS");

    std::cout << R"(
               ...
             ;::::;
           ;::::; :;                                    __  __   ____     __  __
         ;:::::'   :;                                   \ \/ /  / __ \   / / / /
        ;:::::;     ;.                                   \  /  / / / /  / / / /
       ,:::::'       ;           OOO\                    / /  / /_/ /  / /_/ /
       ::::::;       ;          OOOOO\                  /_/   \____/   \____/
       ;:::::;       ;         OOOOOOOO                       ____     ______   ___       ____     __
      ,;::::::;     ;'         / OOOOOOO                     / __ \   / ____/  /   |     / __ \   / /
    ;:::::::::`. ,,,;.        /  / DOOOOOO                  / / / /  / __/    / /| |    / / / /  / /
  .';:::::::::::::::::;,     /  /     DOOOO                / /_/ /  / /___   / ___ |   / /_/ /  /_/
 ,::::::;::::::;;;;::::;,   /  /        DOOO              /_____/  /_____/  /_/  |_|  /_____/  (_)
;`::::::`'::::::;;;::::: ,#/  /          DOOO
:`:::::::`;::::::;;::: ;::#  /            DOOO
::`:::::::`;:::::::: ;::::# /              DOO
`:`:::::::`;:::::: ;::::::#/               DOO
 :::`:::::::`;; ;:::::::::##                OO
 ::::`:::::::`;::::::::;:::#                OO
 `:::::`::::::::::::;'`:;::#                O
  `:::::`::::::::;' /  / `:#
   ::::::`:::::;'  /  /   `#


       Unfortunately, that enemy was a bit stronger than us.
       We need to fight our way back again, but now we have some cool tricks in our sleeves!

     )" "\n" << std::endl;

    system("PAUSE");
    std::cout << "\r\n" << std::endl;

    system("CLS");

    system("Color 0B");
    PrintMenu();
}

void Menu::PrintVictoryScreen() {
    system("Color 06");
    std::cout << R"(

        Villager: "You've proven something incredible, I can't believe you helped us with the dragon,
        we can't even thank you enough for how we are so grateful for saving us!
        Thank you so much DRAGON SLAYER!"

    )" "\n" << std::endl;

    std::cout << "\r\n" << std::endl;
    system("PAUSE");
    std::cout << "\r\n" << std::endl;

    system("CLS");

    std::cout << R"(
            _    __    ____    ______    ______    ____      ____      __  __     __
           | |  / /   /  _/   / ____/   /_  __/   / __ \    / __ \     \ \/ /    / /
           | | / /    / /    / /         / /     / / / /   / /_/ /      \  /    / /
           | |/ /   _/ /    / /___      / /     / /_/ /   / _, _/       / /    /_/
           |___/   /___/    \____/     /_/      \____/   /_/ |_|       /_/    (_
             __  __            __                   __
             \ \/ /__  __ __  / /  ___ __  _____   / /  ___ _______ ___ _  ___
              \  / _ \/ // / / _ \/ _ `/ |/ / -_) / _ \/ -_) __/ _ `/  ' \/ -_)
              /_/\___/\_,_/ /_//_/\_,_/|___/\__/ /_.__/\__/\__/\_,_/_/_/_/\__/
               ___  ___  ___  _________  _  __   ______   _____  _________  __
              / _ \/ _ \/ _ |/ ___/ __ \/ |/ /  / __/ /  / _ \ \/ / __/ _ \/ /
             / // / , _/ __ / (_ / /_/ /    /  _\ \/ /__/ __ |\  / _// , _/_/
            /____/_/|_/_/ |_\___/\____/_/|_/  /___/____/_/ |_|/_/___/_/|_(_)

        Congratulations on beating our game, hope you liked it! See ya soon slayer!

     )" "\n" << std::endl;

    system("PAUSE");
    std::cout << "\r\n" << std::endl;

    system("CLS");

    system("Color 0B");
    PrintMenu();
}