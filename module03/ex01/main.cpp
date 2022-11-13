/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:37:23 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/13 18:40:02 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    
    ScavTrap robot("Jhon");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    cp1->attack("tip");
    robot.guardGate();
    robot.attack("Bob");
    robot.beRepaired(10);
    robot.takeDamage(10);
    robot = ScavTrap("anOther");
    robot.attack("unknown");
    return 0;
}