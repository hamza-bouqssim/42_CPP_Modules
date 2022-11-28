/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:27:11 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 22:14:44 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{};

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72, 45)
{};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &_RobotomyRequestForm): Form(_RobotomyRequestForm)
{
    *this = _RobotomyRequestForm;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &_RobotomyRequestForm)
{
    (void)_RobotomyRequestForm;
    return *this;
};

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if(executor.getGrade() > RobotomyRequestForm::getGradeTosign())
        throw GradeTooLowException();
        srand(int(0));
        if(rand() % 100 + 1 <= 50)
            std::cout << executor.getBureaucratName() << " : has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << "Robotomy Failed" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm()
{};


