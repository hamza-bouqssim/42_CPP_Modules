/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:35:22 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/27 00:17:33 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setname(_string _name)
{
    this->name = _name;
}

_string Zombie::getname()
{
    return this->name;
}

Zombie *zombieHorde(int N, _string name)
{
    int i = 0;
    Zombie *Hordezombies = new Zombie[N];
    while(i < N)
    {
        Hordezombies[i].setname(name);
        i++;
    }
    return Hordezombies;
}
