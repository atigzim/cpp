#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "call Constructors of Cat" << std::endl;
}
Cat::~Cat()
{
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
        this->type = type;
        std::cout << "call Constructors of Cat with type" << std::endl;
    }