#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"
class Cat : public Animal
{
private:
	Brain *brain;	
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