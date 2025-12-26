#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "\n--- Constructors ---" << std::endl;
    ScavTrap a("Ali");
    ScavTrap b("Bob");

    std::cout << "\n--- Attack test ---" << std::endl;
    a.attack("Bob");
    b.takeDamage(20);

    std::cout << "\n--- Repair test ---" << std::endl;
    b.beRepaired(10);

    std::cout << "\n--- Guard Gate ---" << std::endl;
    a.guardGate();

    std::cout << "\n--- Energy exhaustion ---" << std::endl;
    for (int i = 0; i < 55; i++)
        a.attack("Bob");

    std::cout << "\n--- Death test ---" << std::endl;
    b.takeDamage(200);
    b.attack("Ali");
    b.guardGate();

    return 0;
}

