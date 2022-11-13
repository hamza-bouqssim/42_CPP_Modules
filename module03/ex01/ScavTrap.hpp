/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:53:15 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/13 16:11:44 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
class ScavTrap : public ClapTrap{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &_Scavtrap);
    ScavTrap& operator=(const ScavTrap &_Scavtrap);
    ~ScavTrap();
    //member functions:
    void guardGate();
};
#endif