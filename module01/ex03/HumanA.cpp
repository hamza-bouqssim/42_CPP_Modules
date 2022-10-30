/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:21:31 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/30 19:21:32 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(_string _name, Weapon &weapon):weapon(weapon){
    this->name = _name;
}
HumanA::~HumanA(){

}
void HumanA::attack(){
        std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}