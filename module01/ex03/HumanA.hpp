/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:21:27 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/30 19:21:28 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
#define _string std::string
class HumanA{
    _string name;
    Weapon &weapon;
    public:
    HumanA(_string name, Weapon &weapon);
    ~HumanA();
    void attack();
};
#endif