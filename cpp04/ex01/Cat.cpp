#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain();
	std::cout << "call Constructors of Cat" << std::endl;
}
Cat::~Cat()
{
	free(brain);
	std::cout << "call Destructors of Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
	{
		// No member variables to copy in this example
	}
	return *this;
}

Cat::Cat(const Cat &other)
{
	*this = other;
}
Cat::Cat(const std::string &type)
    :Animal(type)
    {
        this->type = "Cat";
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
