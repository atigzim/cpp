#ifndef CAT_HPP
# define CAT_HPP

class Cat
{
private:
	
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
};
#endif