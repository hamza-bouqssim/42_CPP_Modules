#include "Fixed.hpp"
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
};
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}
Fixed::Fixed(int _integer)
{
    std::cout << "Int constructor called" << std::endl;
	this->fixed_point = _integer << this->f_bits;
}
Fixed::Fixed(float _float)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(_float * (1 << this->f_bits));
}
Fixed::Fixed(const Fixed &_Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = _Fixed;
}
Fixed& Fixed::operator=(const Fixed &_Fixed)
{
    (void)_Fixed;
	std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}
int Fixed::toInt(void) const
{
    return (this->fixed_point >> this->f_bits);
}
float Fixed::toFloat(void) const
{
    return((float)this->fixed_point / this->f_bits);
}
std::ostream& operator << (std::ostream &output, const Fixed &_fixed)
{
    output << _fixed.toFloat();
    return output;
}