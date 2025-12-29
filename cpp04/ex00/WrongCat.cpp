#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "call Constructors of WrongCat" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "call Destructors of WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if(this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
}
WrongCat::WrongCat(const std::string &type)
    :WrongAnimal(type)
    {
        this->type = "WrongCat";
        std::cout << "call Constructors of WrongCat with type" << std::endl;
    }

void WrongCat::makeSound() const 
{
	std::cout << "nahn alqqitat lisunaa awfia mithl alkilab "
		<< "walakin la nkhbir alshurtata eala makan almukhadirat "
		<< std::endl;
}

std::string WrongCat::getType() const
{
	return (type);
}