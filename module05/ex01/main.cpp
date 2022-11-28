/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:06 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 23:05:27 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
  try {
		Bureaucrat	bure("Office" , 151);
		Form	obj("Mo3ahada", 10, 50);
		try {
			obj.beSigned(bure);	
		} catch (...) {
		}
		bure.signForm(obj);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}