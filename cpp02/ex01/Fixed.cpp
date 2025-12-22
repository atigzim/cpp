#include "Fixed.hpp"
Fixed::Fixed(): value(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(num * (1 << fractionalBits));
};

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = num << fractionalBits;
};
Fixed::Fixed(const Fixed &other) : value(other.value)
{
    std::cout << "Copy constructor called" << std::endl;
};
Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->value = other.value;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
};
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return (float)this->value / (1 << fractionalBits);
}

int Fixed::toInt( void ) const
{
    return this->value >> fractionalBits;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}