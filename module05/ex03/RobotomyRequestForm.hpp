/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:27:14 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/28 22:24:04 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP
#include <iostream>
#include "AForm.hpp"
class RobotomyRequestForm: public Form{
  public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &_RobotomyRequestForm);
  RobotomyRequestForm &operator= (const RobotomyRequestForm &_RobotomyRequestForm);
  void execute(Bureaucrat const & executor) const;
  ~RobotomyRequestForm();
};
#endif