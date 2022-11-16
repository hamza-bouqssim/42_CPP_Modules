/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:14 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/16 13:35:18 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "dog";
    std::cout << "Dog Constructor Called" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
};

Dog::Dog(const Dog &_Dog)
{
    std::cout << "Dog :Copy Constructor Called" << std::endl;
    this->type = _Dog.type;
};
Dog &Dog::operator=(const Dog &_Dog){

    std::cout << "Dog :Copy  Assingnement Operator Called" << std::endl;
    this->type = _Dog.type;
    return *this;
};
void Dog::makeSound() const
{
    std::cout << "Dog: is Barking" << std::endl;
};