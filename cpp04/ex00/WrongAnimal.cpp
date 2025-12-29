#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "call Constructors of WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "call Destructors of WrongAnimal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}
WrongAnimal::WrongAnimal(const std::string &type):type(type)
{
    std::cout << "call Constructors of WrongAnimal with type" << std::endl;
}

void WrongAnimal::makeSound() const 
{
	std::cout << "sound animal" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
