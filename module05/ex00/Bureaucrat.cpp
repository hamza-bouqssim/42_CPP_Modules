/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:03 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/19 15:40:52 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor called" << std::endl;
};

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &_Bureaucrat)
{
	std::cout << "Copy Constructor Called" << std::endl:
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &_Bureaucrat)
{
	std::cout << "Copy Assingnement Operator Called" << std::endl;
	return *this;
};

std::ofstream &operator<< (std::ofstream &output, const Bureaucrat &_Bureaucrat)
{
	output << _Bureaucrat.grade;
	return output;
};

