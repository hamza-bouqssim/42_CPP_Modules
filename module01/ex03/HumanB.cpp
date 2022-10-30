/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:21:03 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/30 19:21:04 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(_string _name)
{
    this->name = _name;
    weapon = NULL;
    
}
HumanB::~HumanB(){}
void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attack with their " << weapon->getType() << std::endl;
    else
        std::cout << this->name << " attack with their" << std::endl;
}
void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}