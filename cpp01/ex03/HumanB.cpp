#include "HumanB.hpp"

HumanB::HumanB(std::string n):name(n), weapon(NULL){}
HumanB::~HumanB(){}
void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}