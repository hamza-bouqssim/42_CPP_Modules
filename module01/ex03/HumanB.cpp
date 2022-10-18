#include "HumanB.hpp"
HumanB::HumanB(_string _name)
{
    this->name = _name;
}
HumanB::~HumanB(){}
void HumanB::attack()
{
    std::cout << this->name << " attack with their " << weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}