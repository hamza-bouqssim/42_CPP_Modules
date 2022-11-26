/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:08:00 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/26 18:02:39 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRU_HPP
#define SHRU_HPP
#include "AForm.hpp"
#include <iostream>
#include <fstream>
class  ShrubberyCreationForm : public Form
{
    public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &_ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &_ShrubberyCreationForm);
	~ShrubberyCreationForm();
	void execute(const Bureaucrat &executor)const;

};
#endif