#ifndef DUEL_ARENA_H
#define DUEL_ARENA_H

#include "hero.h"

class DuelArena
{
private:
    Hero* hero1;
    Hero* hero2;
public:
    DuelArena(Hero* hero1, Hero* hero2);
    void lets_battle();
};

#endif // DUEL_ARENA_H
