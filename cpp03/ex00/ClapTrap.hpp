#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
   std::string name;
   int hitPoints;
   int energyPoints;
    int attackDamage; 
public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap &other);
    void attack(const std::string& target);
    ClapTrap &operator=(const ClapTrap &other);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif