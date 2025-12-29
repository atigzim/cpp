#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
private:
	
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat(const std::string &type);
	WrongCat &operator=(const WrongCat &other);
	std::string getType() const;
	void makeSound() const;
	~WrongCat();
};


#endif