#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " default constructor called" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap " << name << " cannot high five (dead)." << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this->energyPoints != other.energyPoints)
		this->energyPoints = other.energyPoints;
	if(this->hitPoints != other.hitPoints)
	   this->hitPoints = other.hitPoints;
	if(this->attackDamage != other.attackDamage) 
		this->attackDamage = other.attackDamage;
	// if(this->name != other.name)
	//     this->name == other.name;
	return(*this);
}
FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " parameterized constructor called" <<  std::endl;
}
FragTrap::FragTrap(const FragTrap &other)
	: ClapTrap(other.name)
{
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}
void FragTrap::attack(const std::string &target)
{
    if (hitPoints <= 0)
    {
        std::cout << "FragTrap " << name << " cannot attack (dead)." << std::endl;
        return;
    }
    if (energyPoints <= 0)
    {
        std::cout << "FragTrap " << name << " cannot attack." << std::endl;
        return;
    }

    energyPoints--;
    std::cout << "FragTrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage!" << std::endl;
}
