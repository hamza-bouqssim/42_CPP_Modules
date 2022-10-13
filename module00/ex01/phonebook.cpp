/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:19:21 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/10 17:43:27 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
void alert_msg()
{
    std::cout << "\e[0;31m|-- this field can't be empty --|\e[0m" << std::endl;
}

PhoneBook::PhoneBook(){
    index = -1;
}

std::string truncate(std::string word, int width)
{
	if ((int)word.length() > width)
		return (word.substr(0, width - 1) + ".");
	else if ((int)word.length() < width)
        return (std::string(10 - (int)word.length(), ' ') + word);
	return (word);
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
    if(index == 7)
        index = -1;
    contacts[(++index) % 8] = contact;
}

void PhoneBook::search_contacts(){
    
    //display all contacts:
    int i = -1;
    std::cout << std::string(45, '-') << std::endl;
    std::cout << '|' << std::setw(10) << "id"
    << '|' << std::setw(10) << "firstname"
    << '|' << std::setw(10) << "lastname"
    << '|' << std::setw(10) << "nickname" << '|' << std::endl;
    if (!contacts[7].getFirstName().empty())
        index = 7;
    while(++i <= index)
    {
        std::cout << std::string(45, '-') << std::endl;
        std::cout << "|" << std::setw(10) << i << '|'
        << truncate(contacts[i].getFirstName(), 10) << '|'
        << truncate(contacts[i].getLastName(), 10) << '|'
        << truncate(contacts[i]. getNickname(), 10) <<  '|' << std::endl;
    }
    std::cout << std::string(45, '-') << std::endl;
    
    //display specific contact search by index:
    int id;
    _string s_id;
    std::cout << "search a specific id :";
        
    if(!std::getline(std::cin, s_id))
        exit(1);
    
    id = std::atoi(s_id.c_str());
    if(id <= index && id >= 0)
    {
        Contact contact = this->contacts[id];
        std::cout << std::endl;
        std::cout <<  "first_name: " << contacts[id].getFirstName() << std::endl;
        std::cout <<  "last_name: " << contacts[id].getLastName() << std::endl;
        std::cout <<  "nickname: " << contacts[id].getNickname() << std::endl;
        std::cout <<  "phone_number: " << contacts[id].getPhoneNumber() << std::endl;
        std::cout <<  "darkest_secret: " << contacts[id].getDarkestSecret() << std::endl;
        std::cout << std::endl;
        
    }
    else
        std::cout << "\e[0;31m           out of range !! \e[0m" << std::endl;
}