#include "losers.hpp"



int main(int ac, char *av[])
{
    losers l;
    l.parse_input(av, ac);
    std::ifstream inputFile(av[1]);
    std::ofstream outputFile("new_file.txt");
    if(!inputFile || !outputFile)
    {
        std:: cerr << "error opening file"<< std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        outputFile << l.get_line(line) << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return (0);
}