/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:14:00 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/19 15:38:24 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAU_HPP
#define BUREAU_HPP
#include <iostream>
class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &_Bureaucrat);
    Bureaucrat &operator= (const Bureaucrat &_Bureaucrat);
    ~Bureaucrat();
    
    //methods:
    void setName(std::string _name);
    std::string getName();
    void setGrade(int _grade);
    int getGrade();
    void incrementBureaucratGrade();
    void decrementBureaucratGrade();
    
};
std::ofstream &operator<< (std::ofstream &output, const Bureaucrat &_Bureaucrat);
#endif