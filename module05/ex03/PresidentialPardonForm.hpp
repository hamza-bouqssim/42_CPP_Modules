/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:38:35 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/27 20:42:16 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRES_HPP
#define PRES_HPP
#include <iostream>
#include "AForm.hpp"
class PresidentialPardonForm : public Form
{
   public:
   PresidentialPardonForm(); 
   PresidentialPardonForm(std::string target);
   PresidentialPardonForm(const PresidentialPardonForm &_PresidentialPardonForm); 
   PresidentialPardonForm &operator= (const PresidentialPardonForm &_PresidentialPardonForm);
   ~PresidentialPardonForm();
   	void execute(const Bureaucrat &executor)const;
};
#endif