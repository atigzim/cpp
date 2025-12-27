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

void Dog::makeSound() const 
{
	std::cout << "awawawaw awowawwwo" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}

Dog::Dog(const std::string &type)
	:Animal(type)
	{
		this->type = "Dog";
		std::cout << "call Constructors of Dog with type" << std::endl;
	}
