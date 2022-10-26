/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:26:29 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/26 20:07:44 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(_string _name)
{
    this->name = _name;
}

void Zombie::announce(void)
{
    std::cout << this->name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << std::endl;
    std::cout << "The Zombie is Destroyed Succefully !" << std::endl;
}