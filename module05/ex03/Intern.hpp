/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:59:30 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 18:47:49 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern
{
    private:
        Form *Forms[3];
    public:
        Intern();
        Intern(const Intern &_Intern);
        Intern &operator=(const Intern &_Intern);
        ~Intern();
        Form *makeForm(std::string formName, std::string target);
        Form *createShrubberyCreationForm(std::string target);
        Form *createRobotomyRequestForm(std::string target);
        Form *createPresidentialPardonForm(std::string target);
};
#endif