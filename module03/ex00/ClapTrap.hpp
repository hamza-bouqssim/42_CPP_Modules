/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:14:30 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/12 13:21:29 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap{
	
    std::string name;
	unsigned int Hit_Points;
	unsigned int Energy_point;
	unsigned int Attack_damage;

	public:
	
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &_ClapTrap);
	ClapTrap &operator=(const ClapTrap &_ClapTrap);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif