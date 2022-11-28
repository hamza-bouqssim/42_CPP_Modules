/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:59:26 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 19:47:27 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
Intern::Intern()
{};

Intern::Intern(const Intern &_Intern)
{
     *this = _Intern;   
};

Intern &Intern::operator= (const Intern &_Intern)
{
    int i = 0;
    while(i < 2)
    {
        this->Forms[i] = _Intern.Forms[i];
        i++;
    }
    return *this;
};

Form *Intern::createShrubberyCreationForm(std::string target)
{
    this->Forms[0] = new ShrubberyCreationForm(target);
    return this->Forms[0];
};

Form *Intern::createRobotomyRequestForm(std::string target)
{
  this->Forms[1] = new RobotomyRequestForm(target);
  return this->Forms[1];  
};

Form *Intern::createPresidentialPardonForm(std::string target)
{
  this->Forms[2] = new PresidentialPardonForm(target);
  return this->Forms[2];  
};

// typedef Form*(Intern::*PtrToMem[])(std::string _target);
Form *Intern::makeForm(std::string formName, std::string target)
{
    (void)target;
    std::string _formName[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    Form*(Intern::*PtrToMem[])(std::string _target) = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
    int i = -1;
    while(++i < 2 && _formName[i] != formName);
    switch(i)
    {
        case 0:
            return (this->*PtrToMem[i](target));
            break;
        case 1:
            return (this->*PtrToMem[i](target));
            break;
        case 2:
            return (this->*PtrToMem[i](target));
            break;
    }
};

Intern::~Intern()
{
    int i = 0;
    while(i < 2)
    {
        delete this->Forms[i];
        i++;
    }
};
