/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:06 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 22:55:55 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office", 137);
		Form *F1 = new  ShrubberyCreationForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F1);
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	//--------------------------------
   try {
		Bureaucrat	_Bureaucrat("Office_987", 45);
		Form *F2 = new  RobotomyRequestForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	//--------------------------------
   try {
		Bureaucrat	_Bureaucrat("Office_000", 5);
		Form *F3 = new  PresidentialPardonForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	//--------------------------------
	std::cout << "Shouldn't Work !" << std::endl;
   try {
		Bureaucrat	_Bureaucrat("Office_4454", 151);
		Form *F3 = new  ShrubberyCreationForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}