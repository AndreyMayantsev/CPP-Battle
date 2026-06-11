#include <iostream>
#include "hero.h"
#include "isarmor.h"

Hero::Hero(int hp, int base_damage, isarmor* armor, std::string name): hp(hp), base_damage(base_damage), hero_armor(armor), name(name) {
    std::cout << "Hi, i am " << this->name << ", my hp is " << this->hp << "\n";
}

void Hero::meow(std::string msg) {
    std::cout << "[ " << this->name << "\t HP = " << this->hp << " ] " << msg << "\n";
}

void Hero::damage(Hero* hero) {
    hero->damaged(this->base_damage);
}

void Hero::damaged(int damage) {
    if(this->hero_armor) {
        damage = damage - this->hero_armor->get_defence();
    }
    this->hp = this->hp - damage;
    this->meow("I am damaged");
}

std::string Hero::get_name() {
    return this->name;
}

int Hero::get_hp() {
    return this->hp;
}
