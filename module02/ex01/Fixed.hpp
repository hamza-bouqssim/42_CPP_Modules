#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
class Fixed
{   
    int fixed_point;
    static const int f_bits = 8;
    public :
    Fixed();
    Fixed(const int _integer);
    Fixed(const float _fpnumber);
    Fixed(const Fixed &_fixed);
    Fixed &operator=(const Fixed &_fixed);
    Fixed &operator >>(const Fixed &_fixed);
    ~Fixed();
    float toFloat(void) const;
    int toInt(void) const;
};

#endif