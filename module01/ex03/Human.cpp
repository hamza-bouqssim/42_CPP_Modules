#include "HumanA.hpp"
HumanA::HumanA(_string _name, Weapon &weapon):weapon(weapon){
    this->name = _name;
}
HumanA::~HumanA(){

}
void HumanA::attack(){
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}