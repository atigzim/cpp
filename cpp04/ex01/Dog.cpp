#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	this->type = "Dog";
	std::cout << "call Constructors of Dog" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "call Destructors of Dog" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::Dog(const Dog &other):Animal(other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
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
		this->brain = new Brain();
		std::cout << "call Constructors of Dog with type" << std::endl;
	}
