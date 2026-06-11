#ifndef ISARMOR_H
#define ISARMOR_H

#include <string>

class isarmor
{
private:
    int defence {0};
    std::string name {"Cracked armor"};
public:
    isarmor() = default;
    isarmor(int defence, std::string name);
    int get_defence();
};

#endif // ISARMOR_H
