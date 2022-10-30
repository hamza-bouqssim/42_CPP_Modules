/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:21:22 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/30 19:21:23 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
#define _string std::string
class HumanB{
    _string name;
    Weapon *weapon;
    public:
    void attack();
    void setWeapon(Weapon &weapon);
    HumanB(_string name);
    ~HumanB();
};
#endif