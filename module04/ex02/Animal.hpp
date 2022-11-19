/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:14:32 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/17 20:03:13 by hbouqssi         ###   ########.fr       */
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
        virtual void makeSound() const = 0;
        std::string getType() const;
};
#endif