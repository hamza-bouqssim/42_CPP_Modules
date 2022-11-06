#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    Fixed::fixed_point = 0;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &F)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = F.getRawBits();
}
Fixed& Fixed::operator=(const Fixed &ff)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->fixed_point = ff.getRawBits();
    return *this;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}