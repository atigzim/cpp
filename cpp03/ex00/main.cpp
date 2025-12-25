#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("CL4P-TP");

    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(10);
    clap.attack("Target2");
    clap.beRepaired(5);

    return 0;
}
