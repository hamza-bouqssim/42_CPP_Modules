#if !defined(PHONEBOOK_HPP)
#define PHONEBOOK_HPP
#define _string std::string
#include <iostream>
#include "contact.hpp" //class contact must stand for a phonebook contact.

class phonebook{

        Contact contacts[8];
    public:
        void add_contact();
};


#endif
