#include "HumanA.hpp"

HumanA::HumanA()
{
    
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << name << "attacks with their" << &weapon << std::endl;
}