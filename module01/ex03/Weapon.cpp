#include "Weapon.hpp"

Weapon::Weapon(_string _type)
{
    this->type = _type;
}
Weapon::~Weapon(){

}
void Weapon::setType(_string _type)
{
    this->type = _type;
}
const _string& Weapon::getType()
{
    return type;
}