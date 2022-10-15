/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:26:37 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/16 00:48:17 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
int main()
{
    std::string _string = "HI THIS IS BRAIN";
    std::string *stringPTR = &_string;
    std::string &stringREF = _string;
    
    std::cout << "The memory address of the _string Variable : "<< &_string << std::endl;
    std::cout << "The memory address held by stringPTR : "<< stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : "<< &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable : " << _string << std::endl;
    std::cout << "The value Pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value Pointed to by stringREF : " << stringREF << std::endl;
}