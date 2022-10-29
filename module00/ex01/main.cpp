/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:19:04 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/29 02:06:43 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

void Chart()
{
    std::cout<< "\e[0;31m*                INVALID COMMAND !!!!             *\033[0;32m" << '\n';
    std::cout<< '\n';
    std::cout<< "\033[0;32m*******************INSTRUCTIONS********************\033[0;32m"  << '\n';
    std::cout<< '\n';
    std::cout<< "\033[0;32m*********ENTER ONE OF THESE COMMANDS BELOW*********\033[0;32m"  << '\n';
    std::cout<< '\n';
    std::cout<< "*          \033[0;32m[ ADD : Save a New Contact ]           *\033[0;32m"  << '\n';
    std::cout<< "*     \033[0;32m[ SEARCH : Display a Specific Contact ]     *\033[0;32m"  << '\n';
    std::cout<< "*         \033[0;32m[ EXIT : Leaving The Program ]          *\e[0m"  << '\n';
}

int main (void)
{
    PhoneBook t_PhoneBook = PhoneBook();
    
    while(true)
    {
        _string command;
        std::cout<< "Phonebook> ";

        if (!std::getline(std::cin, command))
            exit(1);
        if (command == "ADD")
            t_PhoneBook.add_contact();
        else if (command == "SEARCH")
            t_PhoneBook.search_contacts();
        else if (command == "EXIT")
            exit(0);
        else
            Chart();
    }
}