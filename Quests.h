#ifndef ZOO_PROJEKT_HRA_20_QUESTS_H
#define ZOO_PROJEKT_HRA_20_QUESTS_H

#include <iostream>

class Quests {
private:
    std::string m_description;
    bool m_questCompletion;
public:
    Quests(std::string description);
    std::string getDescription();
    void setQuestCompletion(bool completed);
    void diedInQuest();
};


#endif //ZOO_PROJEKT_HRA_20_QUESTS_H
