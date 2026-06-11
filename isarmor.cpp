#include "isarmor.h"
#include <iostream>

isarmor::isarmor(int defence, std::string name): defence(defence), name(name) {
    std::cout << "Maked armor: " << this->name << ", DEF = " << this->defence << "\n";
}

int isarmor::get_defence() {
    return this->defence;
}
