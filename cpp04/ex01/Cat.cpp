#include "Cat.hpp"

Cat::Cat() : Animal()
{
	brain = new Brain();
	this->type = "Cat";
	std::cout << "call Constructors of Cat" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "call Destructors of Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		this->type = other.type;
		// delete this->brain;
		// this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::Cat(const Cat &other):Animal(other)
{
	this->type = other.type;
	// this->brain = new Brain(*other.brain);
}

Cat::Cat(const std::string &type)
    :Animal(type)
    {
        this->type = "Cat";
        this->brain = new Brain();
        std::cout << "call Constructors of Cat with type" << std::endl;
    }

void Cat::makeSound() const 
{
	std::cout << "nahn alqqitat lisunaa awfia mithl alkilab "
		<< "walakin la nkhbir alshurtata eala makan almukhadirat "
		<< std::endl;
}

std::string Cat::getType() const
{
	return (type);
}
