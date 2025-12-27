#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	
public:
	Dog();
	Dog(const Dog &other);
	Dog (const std::string &type);
	Dog &operator=(const Dog &other);
	std::string getType() const;
	void makeSound() const;
	~Dog();
};



#endif