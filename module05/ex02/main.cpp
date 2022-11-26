/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:06 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/26 19:27:11 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office", 150);
		Form *F1 = new  ShrubberyCreationForm(_Bureaucrat.getBureaucratName()); //causing leaks !!!!! must delete
		F1->execute(_Bureaucrat);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}