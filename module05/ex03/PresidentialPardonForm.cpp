/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:38:32 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/27 20:49:10 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form()
{};

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 25, 5)
{};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &_PresidentialPardonForm)
{  
  (void)_PresidentialPardonForm;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &_PresidentialPardonForm)
{
  (void)_PresidentialPardonForm;
  return *this;
};

void PresidentialPardonForm::execute(const Bureaucrat &executor)const
{
    if(executor.getGrade() > PresidentialPardonForm::getGradeTosign())
        throw GradeTooHighException();
    std::cout << executor.getBureaucratName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};