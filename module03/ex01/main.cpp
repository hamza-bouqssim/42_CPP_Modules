/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:37:23 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/14 11:06:16 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#define N 40
int main()
{
    ScavTrap _ScavTrap = ScavTrap("Hamza");
    _ScavTrap.attack("Borat");
    _ScavTrap.attack("Borat");
    _ScavTrap.attack("Borat");
    _ScavTrap.attack("Borat");
    _ScavTrap.attack("Borat");
    _ScavTrap.attack("Borat");
    _ScavTrap.attack("Borat");
    _ScavTrap.takeDamage(2);
    
    std::cout << "should ---- attack the  unknown " << N <<  " time" << std::endl;
    for (int i = 0; i < N; i++)
    {
           _ScavTrap.attack("unknown");
    }
    _ScavTrap.guardGate();
    return 0;
}