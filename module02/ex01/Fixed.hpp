#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
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
    int getRawBits() const;
    void setRawBits(int const raw);
};
std::ostream& operator << (std::ostream &output, const Fixed &_fixed);

#endif