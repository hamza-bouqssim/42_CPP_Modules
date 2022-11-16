/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:48:21 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/16 14:48:48 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrongcat";
    std::cout << "WrongCat Constructor Called" << std::endl;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
};

WrongCat::WrongCat(const WrongCat &_WrongCat)
{
    std::cout << "WrongCat :Copy Constructor Called" << std::endl;
    this->type = _WrongCat.type;
};

WrongCat &WrongCat::operator=(const WrongCat &_WrongCat)
{

    std::cout << "WrongCat :Copy  Assingnement Operator Called" << std::endl;
    this->type = _WrongCat.type;
    return *this;
};

void WrongCat::makeSound() const
{
    std::cout << "WrongCat: is Miaoing" << std::endl;
};