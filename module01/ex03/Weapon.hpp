/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:31:21 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/17 14:34:42 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#define _string std::string

class Weapon{
        _string type;
    public:
        Weapon(_string type);
        ~Weapon();
        const _string& getType();
        void setType(_string type);
        
};

#endif