/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:12:50 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/14 13:06:06 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
FragTrap::~FragTrap(){
  std::cout << "FragTrap Destructor Called" << std::endl;  
};

FragTrap::FragTrap(): ClapTrap(){
    std::cout << "FragTrap Constructor Called" << std::endl;
    this->name = "";
    this->Hit_Points = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
};

FragTrap::FragTrap(std::string _name): ClapTrap(_name){
    std::cout << "FragTrap Parametrized Constructor Called" << std::endl;
    this->name = _name;
    this->Hit_Points = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
};

FragTrap::FragTrap(const FragTrap &_FragTrap)
{
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    this->name = _FragTrap.name;
    this->Hit_Points = _FragTrap.Hit_Points;
    this->Energy_point = _FragTrap.Energy_point;
    this->Attack_damage = _FragTrap.Attack_damage;
};

FragTrap& FragTrap::operator=(const FragTrap &_FragTrap)
{
    std::cout << "FragTrap Copy Assignement Operator Called" << std::endl;
    this->name = _FragTrap.name;
    this->Hit_Points = _FragTrap.Hit_Points;
    this->Energy_point = _FragTrap.Energy_point;
    this->Attack_damage = _FragTrap.Attack_damage;
    return *this; 
};

void     FragTrap::highFivesGuys()
{
  if (this->Energy_point > 0 && this->Hit_Points > 0)
      std::cout << "FragTrap: Requesting High Fives " << std::endl;  
};
void FragTrap::attack(const std::string& target)
{
    if(this->Energy_point > 0 && this->Hit_Points > 0)
    {
        this->Energy_point--;
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage<< " points of damage!" << std::endl;
    }
};