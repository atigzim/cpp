#include "Zombie.hpp"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

void printHeader(const std::string& title) {
    std::cout << "\n" << CYAN << "========================================" << RESET << std::endl;
    std::cout << CYAN << "  " << title << RESET << std::endl;
    std::cout << CYAN << "========================================" << RESET << std::endl;
}
void testEx01() {
    printHeader("EX01: Moar brainz!");
    
    std::cout << YELLOW << "\n[Test 1: Create Horde of 5 Zombies]" << RESET << std::endl;
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    
    std::cout << "\nAnnouncing all zombies in horde:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "Zombie " << i << ": ";
        horde[i].announce();
    }
    
    std::cout << "\nDeleting entire horde..." << std::endl;
    delete[] horde;
    
    std::cout << YELLOW << "\n[Test 2: Create Horde of 1 Zombie]" << RESET << std::endl;
    Zombie* single = zombieHorde(1, "LonelyZombie");
    single->announce();
    delete[] single;
    
    std::cout << YELLOW << "\n[Test 3: Create Horde of 10 Zombies]" << RESET << std::endl;
    Zombie* bigHorde = zombieHorde(10, "BigHorde");
    for (int i = 0; i < 10; i++) {
        bigHorde[i].announce();
    }
    delete[] bigHorde;
}
int main()
{
    testEx01();
    return 0;
    // Zombie* a = zombieHorde(3, "ali");
    // for (int i = 0; i < 3; i++)
    //     a->announce();
    // delete[] a;
}