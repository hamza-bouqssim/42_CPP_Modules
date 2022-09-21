#include "phonebook.hpp"
#include <string>
#include <iostream>

PhoneBook::PhoneBook() {
    //not done yet just to avoid the compiling error
	std::cout << "_";
}

void PhoneBook::add_contact()
{
    _string fname, lname, nickname, secret;
    std::cout << "Enter The First Name : ";
    std::getline(std::cin, fname);
    std::cout << "Enter The Last Name : ";
    std::getline(std::cin, lname);
    std::cout << "Enter The Nickname : ";
    std::getline(std::cin, nickname);
    std::cout << "Enter The Darkest Secret : ";
    std::getline(std::cin, secret);
    std::cout << "you've entered this values :     "<< fname << ' '<< lname << ' ' << nickname << ' ' << secret << ' ' << std::endl;
}