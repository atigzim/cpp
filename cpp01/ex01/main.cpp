#include "Zombie.hpp"

int main()
{
    Zombie* a = zombieHorde(3, "ali");
    for (int i = 0; i < 3; i++)
        a->announce();
    delete[] a;
}