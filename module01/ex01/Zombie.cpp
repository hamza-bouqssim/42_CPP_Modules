/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:35:13 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/27 00:28:02 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << "The Zombie is Destroyed Succefully !" << std::endl;
}