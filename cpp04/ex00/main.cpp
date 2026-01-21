#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void test_normal()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
}
void test_wrong()
{
	WrongAnimal* meta = new WrongAnimal();
	WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the wrong animal sound!
	meta->makeSound();
	delete meta;
	delete i;
}
int main()
{
	std::cout << "----- Normal Animals -----" << std::endl;
	test_normal();
	std::cout << "----- Wrong Animals -----" << std::endl;
	test_wrong();
return 0;
}