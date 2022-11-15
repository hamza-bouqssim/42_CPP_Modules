/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:07 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/15 20:25:08 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat()
{
    std::cout << "Cat Constructor Called" << std::endl;
};

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}
Cat::Cat(const Cat &_Cat)
{
    std::cout << "Cat :Copy Constructor Called" << std::endl;
};
Cat &Cat::operator=(const Cat &_Cat){

    std::cout << "Cat :Copy  Assingnement Operator Called" << std::endl;
};
void Cat::makeSound(){
    std::cout << "Cat" << std::endl;
};