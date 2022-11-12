/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:14:30 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/12 10:14:00 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap{
    std::string name;
	int Hit_Points = 10;
	int Energy_point = 10;
	int Attack_damage = 0;
	public:
	ClapTrap();
	ClapTrap(const ClapTrap &_ClapTrap);
	ClapTrap &operator=(const ClapTrap &_ClapTrap);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif