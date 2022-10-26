/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:35:06 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/27 00:31:33 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 5
int main()
{
    int i = 0;
    Zombie *HordeZombies = zombieHorde(N, "hiss");
    while(i < N)
    {
        HordeZombies[i].announce();
        i++;
    }
    delete[] HordeZombies;
}