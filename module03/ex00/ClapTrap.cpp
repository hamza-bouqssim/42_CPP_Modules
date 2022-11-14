/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:26:00 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/14 13:26:36 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << " Claptrap Constructor Called" << std::endl;
    this->name = "";
    this->Hit_Points = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
};

ClapTrap::~ClapTrap(){
    std::cout << "Claptrap Destructor Called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &_ClapTrap)
{
    std::cout << " Claptrap Copy Construtor Called" << std::endl;
    // *this = _Claptrap;
    this->name = _ClapTrap.name;
    this->Hit_Points = _ClapTrap.Hit_Points;
    this->Energy_point = _ClapTrap.Energy_point;
    this->Attack_damage = _ClapTrap.Attack_damage;
};

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "Claptrap Parametrized Constructor Called" << std::endl;
    this->name = _name;
    this->Hit_Points = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &_ClapTrap)
{
    std::cout << "Claptrap Copy Assignement Operator Called" << std::endl;
    if(this != &_ClapTrap)
    {
        this->name = _ClapTrap.name;
        this->Hit_Points = _ClapTrap.Hit_Points;
        this->Energy_point = _ClapTrap.Energy_point;
        this->Attack_damage = _ClapTrap.Attack_damage;
    }
        return *this;
};

void ClapTrap::attack(const std::string& target)
{
    if(this->Energy_point > 0 && this->Hit_Points > 0)
    {
        this->Energy_point--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage<< " points of damage!" << std::endl;
    }
};

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Energy_point > 0 && this->Hit_Points > 0)
    {
        this->Hit_Points--;
        this->Energy_point >= amount ? this->Energy_point -= amount : this->Energy_point = 0;
        std::cout << "ClapTrap has lost " << amount << " of energy points\n";
    }
    
};

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Energy_point > 0 && this->Hit_Points > 0)
    {
        this->Energy_point--;
        std::cout << "ClapTrap is reparing itself and took this " << amount << " amount\n";
        this->Hit_Points += amount;
    }
};