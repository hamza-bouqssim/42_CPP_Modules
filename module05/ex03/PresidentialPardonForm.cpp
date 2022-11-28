/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:38:32 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 22:49:14 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{};

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 25, 5)
{};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &_PresidentialPardonForm): Form(_PresidentialPardonForm)
{  
  *this = _PresidentialPardonForm;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &_PresidentialPardonForm)
{
  (void)_PresidentialPardonForm;
  return *this;
};

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if(executor.getGrade() > PresidentialPardonForm::getGradeTosign())
        throw GradeTooLowException();
    std::cout << executor.getBureaucratName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
}