#if !defined(__CONTACT__)
#define __CONTACT__
#define _string std::string
#include <iostream>

class Contact{
    private:
        _string first_name;
        _string last_name;
        _string nickname;
        _string phone_number;
        _string darkest_secret;
    public:
        Contact();
        Contact(_string fname, _string lname, _string fm_name, _string d_secret);
        _string get_first_name();
        _string get_last_name();
        _string get_nickname();
        _string get_phone();
        _string get_darkest_secret();

};


#endif
