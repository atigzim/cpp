#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "call Constructors of Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "call Destructors of Dog" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		// No member variables to copy in this example
	}
	return *this;
}

Dog::Dog(const Dog &other)
{
	*this = other;
}