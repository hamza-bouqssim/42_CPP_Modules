#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#define _string std::string
#include <iostream>
#include "contact.hpp" //class contact must stand for a phonebook contact.

class PhoneBook{
    private:
        Contact contacts[8];
        void get_contacts(int index);
    public:
        PhoneBook();
        void add_contact();
};


#endif
