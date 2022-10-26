/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:35:19 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/27 00:26:06 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#define _string std::string
#include <iostream>
class Zombie{
        _string name;
    public:
        Zombie();
        //Zombie(_string _name);
        ~Zombie();
        void announce(void);
        _string getname();
        void setname(_string name);
};

Zombie *zombieHorde(int N, _string name);
#endif