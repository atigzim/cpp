#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..."
              << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed" 
              << std::endl;
}

void Zombie::set_name(std::string _name)
{
  name = _name;
}
