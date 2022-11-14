/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:49:08 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/14 11:09:01 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap _ClapTrap = ClapTrap("Hamza");
    _ClapTrap.attack("Borat");
    _ClapTrap.attack("Borat");
    _ClapTrap.attack("Borat");
    _ClapTrap.attack("Borat");
    _ClapTrap.attack("Borat");
    _ClapTrap.attack("Borat");
    _ClapTrap.attack("unknown");
    _ClapTrap.takeDamage(2);
    std::cout << "should ---- attack the  unknown one time" << std::endl;
    _ClapTrap.attack("unknown");
    _ClapTrap.attack("unknown");
    _ClapTrap.attack("unknown");
    
    return 0;
}