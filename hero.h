#ifndef HERO_H
#define HERO_H

#include "isarmor.h"

class Hero
{
private:
    int hp;
    int base_damage;
    isarmor* hero_armor;
    std::string name;
public:
    Hero(int hp, int base_damage, isarmor* armor, std::string name);
    std::string get_name();
    int get_hp();
    void meow(std::string msg);
    void damage(Hero* hero);
    void damaged(int damage);
};

#endif // HERO_H
