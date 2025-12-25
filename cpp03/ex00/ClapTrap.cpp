#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(0){}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " has been created." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack." << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount
        << " points of damage! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot repair." << std::endl;
        return;
    
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs " << amount
        << "Current hit points: " << hitPoints << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destroyed." << std::endl;
}

