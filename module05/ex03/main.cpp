/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:06 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/27 17:31:14 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office", 0);
		Form *F1 = new  ShrubberyCreationForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		_Bureaucrat.executeForm(*F1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}