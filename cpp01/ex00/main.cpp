#include "Zombie.hpp"

int main()
{
    Zombie* z = newZombie("ali");
    z->announce();
    randomChump("simo");
    delete z;
}