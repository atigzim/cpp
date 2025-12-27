#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
private:
	
public:
	Cat();
	Cat(const Cat &other);
	Cat(const std::string &type);
	Cat &operator=(const Cat &other);
	~Cat();
};


#endif