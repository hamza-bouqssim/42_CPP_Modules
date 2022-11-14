/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:02:32 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/14 13:15:14 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define N 97
#define NAME "UNKNOWN"
int main()
{
    FragTrap _FragTrap = FragTrap("Hamza");
    _FragTrap.attack("Unknown");
    _FragTrap.attack("Unknown");
    _FragTrap.attack("Unknown");
    std::cout << "should attack " << NAME  << " " << N << " time" << std::endl;
    for(int i = 0; i < N; i++)
    {
        _FragTrap.attack(NAME);
    }
    std::cout << "Should not diplay the hive five Message" << std::endl;
    _FragTrap.highFivesGuys();
    
    return 0;
}