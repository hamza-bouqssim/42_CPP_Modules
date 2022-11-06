#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}
Fixed::Fixed(int _integer)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(float _float)
{
    std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &_Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed &_fixed)
{
	std::cout << "Copy assignement operator called" << std::endl;
}