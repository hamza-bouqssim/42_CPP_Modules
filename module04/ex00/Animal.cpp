/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:01 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/18 12:50:26 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "animal";
    std::cout << "Animal Constructor Called" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
};

Animal::Animal(const Animal &_Animal)
{
    std::cout << "Animal :Copy Constructor Called" << std::endl;
     this->type = _Animal.type;
};

Animal &Animal::operator=(const Animal &_Animal){

    std::cout << "Animal :Copy  Assingnement Operator Called" << std::endl;
    this->type = _Animal.type;
    return *this;
};

void Animal::makeSound() const
{
    std::cout << "Animal Sounds" << std::endl;
};

std::string Animal::getType() const
{
    return this->type;
};
void Animal::setType(std::string _type)
{
    this->type = _type;
}