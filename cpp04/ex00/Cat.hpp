#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
class Cat : public Animal
{
private:
	
public:
	Cat();
	Cat(const Cat &other);
	Cat(const std::string &type);
	Cat &operator=(const Cat &other);
	std::string getType() const;
	void makeSound() const;
	~Cat();
};


#endif