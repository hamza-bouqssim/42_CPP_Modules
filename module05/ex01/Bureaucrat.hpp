/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:00 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/21 13:53:55 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAU_HPP
#define BUREAU_HPP
#include <iostream>
#include <exception>
class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &_Bureaucrat);
    Bureaucrat &operator= (const Bureaucrat &_Bureaucrat);
    ~Bureaucrat();
    //Nested Classes:
    class GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException() throw();
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        GradeTooLowException() throw();
        const char* what() const throw();
    };
    //methods:
    std::string getBureaucratName()const;
    int getGrade() const;
    void incrementBureaucratGrade();
    void decrementBureaucratGrade();
    
};
std::ostream &operator<< (std::ostream &output, const Bureaucrat &_Bureaucrat);
#endif