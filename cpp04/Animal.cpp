#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "call Constructors of Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "call Destructors of Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}
Animal::Animal(const std::string &type):type(type)
{
    std::cout << "call Constructors of Animal with type" << std::endl;
}