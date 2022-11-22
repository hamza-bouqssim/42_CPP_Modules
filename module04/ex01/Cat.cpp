/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:18:12 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/22 18:09:48 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
Cat::Cat()
{
    this ->_Brain = new Brain();
    std::cout << "Cat:   Constructor Called" << std::endl;
};

Cat::~Cat()
{
    std::cout << "Cat:   Destructor Called" << std::endl;
    delete this->_Brain;
};

Cat::Cat(const Cat &_Cat)
{
    std::cout << "Cat:   Copy Constructor Called" << std::endl;
    this->type = _Cat.type;
    _Brain = new Brain;
    *(this->_Brain) = *(_Cat._Brain);
};

Cat &Cat::operator=(const Cat &_Cat)
{

    std::cout << "Cat: Copy  Assingnement Operator Called" << std::endl;
    this->type = _Cat.type;
     if(this->_Brain)
        delete _Brain;
    _Brain = new Brain;
    *(this->_Brain) = *(_Cat._Brain);
    return *this;
};

void Cat::makeSound() const
{
    std::cout << "Cat: is Miaoing" << std::endl;
};