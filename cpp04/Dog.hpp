#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
private:
	
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
};



#endif