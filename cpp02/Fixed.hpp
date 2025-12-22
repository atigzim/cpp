#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int fractionalBits = 8;	
public:
	Fixed(): value(0) {};
	Fixed(const Fixed &other) : value(other.value) {};
	
	~Fixed();
};

Fixed::Fixed()
{
}

Fixed::~Fixed()
{
}



#endif