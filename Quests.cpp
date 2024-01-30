#include "Quests.h"
#include "Menu.h"
#include <iostream>

Quests::Quests(std::string description) {
    m_description = description;
    m_questCompletion = false;
}

std::string Quests::getDescription() {
    return  m_description;
}
void Quests::setQuestCompletion(bool completed){
    m_questCompletion=completed;
}
