#include "Form.hpp"
Form::Form(const std::string _name, const int _gradeToSign, const int _gradeToExec):name(_name), sign(false) , gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{
    if(this->gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (this->gradeToSign > 150)
        throw Form::GradeTooLowException();

};

std::string Form::getName() const
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
    output << _Form.getName() << ", "<< _Form.getGradeTosign() << std::endl;
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

}
Form::~Form(){};