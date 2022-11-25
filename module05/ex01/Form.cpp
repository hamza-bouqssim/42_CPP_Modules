#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form(const std::string _name, const int _gradeToSign, const int _gradeToExec):name(_name), sign(false) , gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{
    if(this->gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (this->gradeToSign > 150)
        throw Form::GradeTooLowException();

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
    if(_Bureaucrat.getGrade() <= this->gradeToSign)
        this->sign = true;
    else 
        throw Form::GradeTooLowException();
}
void Form::signForm()
{
    Bureaucrat obj;
    if(this->sign == true)
        std::cout << obj.getBureaucratName() << " signed " << this->getFormName() << std::endl;
    else
        std::cout << obj.getBureaucratName() << " Could not Sign The " << this->getFormName() << std::endl;
};
Form::~Form(){};