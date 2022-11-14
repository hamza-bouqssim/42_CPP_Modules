/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:53:05 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/14 11:05:18 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
ScavTrap::~ScavTrap(){
  std::cout << "ScavTrap Destructor Called" << std::endl;  
};

ScavTrap::ScavTrap(): ClapTrap(){
    std::cout << "ScavTrap Constructor Called" << std::endl;
    this->name = "";
    this->Hit_Points = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
};

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name){
    std::cout << "ScavTrap Constructor Called" << std::endl;
    this->name = _name;
    this->Hit_Points = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &_ScavTrap)
{
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;
    *this = _ScavTrap;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &_Scavtrap)
{
    std::cout << "Scavtrap Copy Assignement Operator Called" << std::endl;
    this->name = _Scavtrap.name;
    this->Hit_Points = _Scavtrap.Hit_Points;
    this->Energy_point = _Scavtrap.Energy_point;
    this->Attack_damage = _Scavtrap.Attack_damage;
    return *this; 
};

void     ScavTrap::guardGate()
{
  if (this->Energy_point > 0 && this->Hit_Points > 0)
      std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;  
};
void ScavTrap::attack(const std::string& target)
{
    if(this->Energy_point > 0 && this->Hit_Points > 0)
    {
        this->Energy_point--;
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage<< " points of damage!" << std::endl;
    }
};