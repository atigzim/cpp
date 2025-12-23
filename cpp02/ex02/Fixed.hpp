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
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	Fixed &operator+(const Fixed &other);
	Fixed &operator-(const Fixed &other);
	Fixed &operator*(const Fixed &other);
	Fixed &operator/(const Fixed &other);

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed max(const Fixed& one , const Fixed& two);
	static Fixed min(const Fixed& one , const Fixed& two);
	static Fixed min(Fixed& one, Fixed& two);
	static Fixed max(Fixed& one, Fixed& two);

	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif