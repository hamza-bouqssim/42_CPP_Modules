#include "phonebook.hpp"
#include <string>
#include <iostream>
void alert_msg()
{
    std::cout << "\e[0;31m|-- this field can't be empty --|\e[0m" << std::endl;
}

void PhoneBook::add_contact()
{
    Contact contact;
    _string fname, lname, nickname, phone, secret;
    do{
        std::cout << "Enter The First Name : ";
        if(!std::getline(std::cin, fname))
                exit(1);
        if(fname.empty())
            alert_msg();
    }
    while(fname.empty());
    contact.setFirstName(fname);

    do{
        std::cout << "Enter The Last Name : ";
        if(!std::getline(std::cin, lname))
            exit(1);
        if(lname.empty())
            alert_msg();
    }
    while(lname.empty());
    contact.setLastName(lname);
    
    do{
        std::cout << "Enter The Nickname : ";
        if (!std::getline(std::cin, nickname))
            exit(1);
        if (nickname.empty())
            alert_msg();
    }
    while(nickname.empty());
    contact.setNickName(nickname);

    do{
        std::cout << "Enter The Phone Number : ";
        if(!std::getline(std::cin, phone))
            exit(1);
        if(phone.empty())
            alert_msg();
    }
    while(phone.empty());
    contact.setPhoneNumber(phone);

    do{
        std::cout << "Enter The Darkest Secret : ";
        if(!std::getline(std::cin, secret))
            exit(1);
        if(secret.empty())
            alert_msg();
    }
    while(secret.empty());
    contact.setDarkestSecret(secret);
}