/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:06 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/21 13:58:14 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
   try {
		Bureaucrat	_Bureaucrat("Office" ,1);
		Form	_Form("Mo3ahada", 25, 50);
		try {
			_Form.beSigned(_Bureaucrat);	
		} 
		catch (...)
		{
		}
		_Bureaucrat.signForm(_Form);
	} 
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}