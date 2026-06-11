#include <iostream>
#include "duel_arena.h"

DuelArena::DuelArena(Hero* hero1, Hero* hero2): hero1(hero1), hero2(hero2) {
    std::cout << "--- MAKING BATTLE ---\n\n";
    std::cout << "HERO 1: " << hero1->get_name() << "\n";
    std::cout << "HERO 2: " << hero2->get_name() << "\n";
    std::cout << "\n";
    std::cout << "--- Let's Battle, Heroes! ---\n";
};

void DuelArena::lets_battle() {
    while (this->hero1->get_hp() > 0 && this->hero2->get_hp() > 0) {
        this->hero1->damage(this->hero2);
        if (this->hero2->get_hp() <= 0) {
            break;
        }
        this->hero2->damage(this->hero1);
    }
    std::cout << "\nRESULT:\n";
    this->hero1->meow("<- my state");
    this->hero2->meow("<- my state");
}
