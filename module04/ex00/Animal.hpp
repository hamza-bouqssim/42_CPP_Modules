/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:04 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/15 20:25:05 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const Animal &_Animal);
    Animal& operator=(const Animal &_Animal);
    virtual ~Animal();
    void makeSound();
};
#endif