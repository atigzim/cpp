#include "Harl.hpp"

int main(int ac , char **av)
{
    if (ac != 2 || !av[1] || av[1][0] == '\0')
    {
        std::cout << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain(av[1]);
    return 0;
}