#ifndef ZOO_PROJEKT_HRA_20_MENU_H
#define ZOO_PROJEKT_HRA_20_MENU_H

#include <iostream>
#include <cstdint>

class Menu {
private:
    int m_menuChoose; // Pro výběr možnosti v menu.
    bool m_gameRun = false; // Stav: Běží hra?
    bool m_gameState_Menu = true; // Stav: Běží menu?
    bool m_isPlayerDead = false; // Pokud hráč při zápasu umře, spustí se DeathScreen().
    bool m_playerWin = false; // Pokud hráč splní poslední quest a dokončí hru = vyhrál, spustí se VictoryScreen().

public:
    // Výpis úvodní obrazovky a hlavního menu na konzoli při spuštění hry.
    void PrintMenu();
    // Výpis obrazovky pokud hráč umře.
    void PrintDeathScreen();
    // Výpis obrazovky pokud hráč hru vyhraje.
    void PrintVictoryScreen();
};
#endif //ZOO_PROJEKT_HRA_20_MENU_H