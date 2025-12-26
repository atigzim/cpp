#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		~Animal();
};

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

}

#endif