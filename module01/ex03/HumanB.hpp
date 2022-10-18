#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
#define _string std::string
class HumanB{
    _string name;
    Weapon *weapon;
    public:
    void attack();
    void setWeapon(Weapon &weapon);
    HumanB(_string name);
    ~HumanB();
};
#endif