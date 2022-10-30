/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:21:16 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/30 19:21:17 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(_string _type)
{
    this->type = _type;
}
Weapon::~Weapon(){

}
void Weapon::setType(_string _type)
{
    this->type = _type;
}
const _string& Weapon::getType()
{
    return type;
}