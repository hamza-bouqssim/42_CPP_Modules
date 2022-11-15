/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:01 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/15 20:25:02 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal()
{
    std::cout << "Animal Constructor Called" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}
Animal::Animal(const Animal &_Animal)
{
    std::cout << "Animal :Copy Constructor Called" << std::endl;
};
Animal &Animal::operator=(const Animal &_Animal){

    std::cout << "Animal :Copy  Assingnement Operator Called" << std::endl;
};
void Animal::makeSound(){
    std::cout << "Animal" << std::endl;
};