#include "Fixed.hpp"
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

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

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits memeber function called" << std::endl;
    this->fixed_point = raw;
}

Fixed& Fixed::operator=(const Fixed &_Fixed)
{
    (void)_Fixed;
	std::cout << "Copy assignement operator called" << std::endl;
    this->fixed_point = _Fixed.getRawBits();
    return *this;
}

int Fixed::toInt(void) const
{
    return (this->fixed_point >> this->f_bits);
}

float Fixed::toFloat(void) const
{
    return((float)this->fixed_point / 256);
}

std::ostream& operator << (std::ostream &output, const Fixed &_fixed)
{
    output << _fixed.toFloat();
    return output;
}