#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("ScavTrap")
{
    std::cout << " ScavTrap Default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other.name)
{
    this->hitPoints = hitPoints;
    this->energyPoints = energyPoints;
    this->attackDamage = attackDamage;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
     if (this->energyPoints != other.energyPoints)
        this->energyPoints = other.energyPoints;
    if(this->hitPoints != other.hitPoints)
       this->hitPoints = other.hitPoints;
    if(this->attackDamage != other.attackDamage) 
        this->attackDamage = other.attackDamage;
    return(*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack." << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " attacks "
        << target << ", causing " << attackDamage <<
        " points of damage!" << std::endl;
}

ScavTrap ::~ScavTrap(){}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "<< name << "is now in Gate keeper mode" << std::endl; 
}
ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " ScavTrap has been created";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

