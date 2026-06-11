#include <iostream>
#include <memory>
#include "hero.h"
#include "isarmor.h"
#include "duel_arena.h"

int main()

{
    std::shared_ptr<isarmor> sh_armor = std::make_shared<isarmor>(2, "Blaced good armor");

    std::unique_ptr<Hero> uniq_hero1 = std::make_unique<Hero>(100, 10, sh_armor.get(), "Alexander");
    std::unique_ptr<Hero> uniq_hero2 = std::make_unique<Hero>(89, 13, sh_armor.get(), "Marin");

    std::unique_ptr<DuelArena> arena = std::make_unique<DuelArena>(uniq_hero1.get(), uniq_hero2.get());
    arena->lets_battle();

    return 0;
}
