/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:04:38 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/14 12:12:13 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
class FragTrap : public ClapTrap{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &_FragTrap);
    FragTrap& operator=(const FragTrap &_FragTrap);
    ~FragTrap();
    //Member Functions:
    void highFivesGuys(void);
    void attack(const std::string &target);
    
};
#endif