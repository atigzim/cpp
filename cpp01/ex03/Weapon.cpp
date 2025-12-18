#include "Weapon.hpp"

Weapon::Weapon(std::string n): type(n){
    std::cout << n << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon is Destroyed" << std::endl;
}
void Weapon::setType(std::string n)
{
    type = n;
}
std::string Weapon::getType()const{return (type);}
