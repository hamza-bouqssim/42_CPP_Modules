#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
#define _string std::string
class HumanA{
    _string name;
    Weapon &weapon;
    public:
    HumanA(_string name, Weapon &weapon);
    ~HumanA();
    void attack();
};
#endif