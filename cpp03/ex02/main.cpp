#include "FragTrap.hpp"

int main(void)
{
    std::cout << "\n--- Constructors ---" << std::endl;
    FragTrap a("Ali");
    FragTrap b("Bob");
    ScavTrap s("sisi");

    std::cout << "\n--- Attack test ---" << std::endl;
    a.attack("Bob");
    s.attack("ali");
    b.takeDamage(30);

    std::cout << "\n--- Repair test ---" << std::endl;
    b.beRepaired(10);

    std::cout << "\n--- High Fives ---" << std::endl;
    a.highFivesGuys();

    std::cout << "\n--- Energy exhaustion ---" << std::endl;
    for (int i = 0; i < 105; i++)
        a.attack("Bob");

    std::cout << "\n--- Death test ---" << std::endl;
    b.takeDamage(200);
    b.attack("Ali");
    b.highFivesGuys();

    return 0;
}

