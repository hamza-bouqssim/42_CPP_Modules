/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:06 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 23:11:49 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main()
{
	try
	{
		Bureaucrat bureuDZp = Bureaucrat("Office", 5);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		rrf->execute(bureuDZp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
    return 0;
}