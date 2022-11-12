/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:14:27 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/12 10:11:38 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
ClapTrap::ClapTrap(){
    std::cout << "Constructor Called" << std::endl;
};
ClapTrap::~ClapTrap(){
    std::cout << "Destructor Called" << std::endl;
};
void ClapTrap::attack(const std::string& target)
{
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    
}
void ClapTrap::beRepaired(unsigned int amount)
{
    
}