#include "Fixed.hpp"
Fixed::Fixed(): value(0){};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed::Fixed(const float num)
{
    this->value = roundf(num * (1 << fractionalBits));
};

Fixed::Fixed(const int num)
{
    this->value = num << fractionalBits;
};
Fixed::Fixed(const Fixed &other) : value(other.value){};

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->value = other.value;
    }
    return *this;
};

Fixed::~Fixed(){}

float Fixed::toFloat( void ) const
{
    return (float)this->value / (1 << fractionalBits);
}

int Fixed::toInt( void ) const
{
    return this->value >> fractionalBits;
}

bool Fixed::operator!=(const Fixed &other) const
{
    if (this->value != other.value)
        return (true);
    return (false); 
}

bool Fixed::operator==(const Fixed &other) const
{
    if (this->value == other.value)
        return (true);
    return (false);
    
}

bool Fixed::operator<(const Fixed &other) const
{
    if (this->value < other.value)
        return (true);
    return (false);
    
}

bool Fixed::operator>(const Fixed &other) const
{
    if (this->value > other.value)
        return (true);
    return (false);
    
}

bool Fixed::operator<=(const Fixed &other) const
{
    if (this->value <= other.value)
        return (true);
    return (false);
    
}

bool Fixed::operator>=(const Fixed &other) const
{
    if (this->value >= other.value)
        return (true);
    return (false);  
}

Fixed &Fixed::operator+(const Fixed &other)
{
    this->value += other.value;
    return (*this);
}

Fixed &Fixed::operator*(const Fixed &other)
{
    Fixed r;
    r.value = this->value * other.value;
    return (*r);
}

Fixed &Fixed::operator-(const Fixed &other)
{
    this->value -= other.value;
    return (*this);
}

Fixed &Fixed::operator/(const Fixed &other)
{
    this->value /= other.value;
    return (*this);
}

Fixed Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed x(*this);
    this->value++;
    return (x);
}
Fixed Fixed::operator--(int)
{
    Fixed x(*this);
    this->value--;
    return (x);
}

Fixed Fixed::max(const Fixed& one , const Fixed& two)
{
    if (one.value > two.value)
        return (one);
    return (two);
}

Fixed Fixed::min(const Fixed& one , const Fixed& two)
{
    if (one.value < two.value)
        return (one);
    return (two);
}

Fixed Fixed::max(Fixed& one, Fixed& two)
{
    if (one.value > two.value)
        return (one);
    return (two);
}

Fixed Fixed::min(Fixed& one, Fixed& two)
{
    if (one.value < two.value)
        return (one);
    return (two);
}