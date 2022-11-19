/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:14:42 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/19 12:12:31 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog()
{
    this->_Brain = new Brain();
    std::cout << "Dog:   Constructor Called" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog:   Destructor Called" << std::endl;
    delete this->_Brain;
};

Dog::Dog(const Dog &_Dog)
{
    std::cout << "Dog:  Copy Constructor Called" << std::endl;
    this->type = _Dog.type;
    _Brain = new Brain;
    *(this->_Brain) = *(_Dog._Brain);
};

Dog &Dog::operator=(const Dog &_Dog){

    std::cout << "Dog: Copy  Assingnement Operator Called" << std::endl;
    this->type = _Dog.type;
    _Brain = new Brain;
    *(this->_Brain) = *(_Dog._Brain);
    return *this;
};

void Dog::makeSound() const
{
    std::cout << "Dog: is Barking" << std::endl;
};