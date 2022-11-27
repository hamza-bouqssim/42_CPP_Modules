/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:07:44 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/27 17:07:14 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
Form::Form(): name(""),gradeToSign(150),gradeToExec(150)
{};

Form::Form(const std::string _name, const int _gradeToSign, const int _gradeToExec):name(_name), sign(false) , gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{
    if(this->gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (this->gradeToSign > 150)
        throw Form::GradeTooLowException();
};

Form::Form(const Form &_Form):name(_Form.name),sign(_Form.sign), gradeToSign(_Form.gradeToSign), gradeToExec(_Form.gradeToExec)
{
};

Form &Form::operator=(const Form &_Form)
{
    this->sign = _Form.sign;
    return *this;
};

std::string Form::getFormName() const
{
    return this->name;
};

bool Form::getSign() const
{
    return this->sign;
};

int Form::getGradeTosign() const
{
    return this->gradeToSign;
};

int Form::getGradeToExec() const
{
    return this->gradeToExec;
};
std::ostream &operator<<(std::ostream &output, const Form &_Form)
{
    output << _Form.getFormName() << ", "<< _Form.getGradeTosign() << std::endl;
    return output;
}
void Form::beSigned(Bureaucrat _Bureaucrat)
{
    if (_Bureaucrat.getGrade() <= this->gradeToSign)
        this->sign = true;
    else 
        throw Form::GradeTooLowException();
};

Form::GradeTooHighException::GradeTooHighException()throw()
{};

Form::GradeTooLowException::GradeTooLowException() throw()
{};

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade To Low";
};
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade To High";
};

Form::~Form(){};