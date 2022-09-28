#include <iostream>
#include "contact.hpp"

//implementing setters:

    void Contact::setFirstName(_string fn)
    {
        first_name = fn;
    }
    void Contact::setLastName(_string ln)
    {
        last_name = ln;
    }
    void Contact::setNickName(_string nn)
    {
        nickname = nn;
    }
    void Contact::setPhoneNumber(_string ph)
    {
        phone_number = ph;
    }
    void Contact::setDarkestSecret(_string ds)
    {
        darkest_secret = ds;
    }

//implementing getters:

    _string Contact::getFirstName()
    {
        return first_name;
    }
    _string Contact::getLastName()
    {
        return last_name;
    }
    _string Contact::getNickname()
    {
        return nickname;
    }
    _string Contact::getPhoneNumber()
    {
        return phone_number;
    }
    _string Contact::getDarkestSecret()
    {
        return darkest_secret;
    }
