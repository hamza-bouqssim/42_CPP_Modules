/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:43:13 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/16 14:44:20 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
    this->type = "Wronganimal";
    std::cout << "WrongAnimal Constructor Called" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal)
{
    std::cout << "WrongAnimal :Copy Constructor Called" << std::endl;
     this->type = _WrongAnimal.type;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &_WrongAnimal){

    std::cout << "WrongAnimal :Copy  Assingnement Operator Called" << std::endl;
    this->type = _WrongAnimal.type;
    return *this;
};

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sounds" << std::endl;
};

std::string WrongAnimal::getType() const
{
    return this->type;
}