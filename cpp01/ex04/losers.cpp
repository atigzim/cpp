#include "losers.hpp"

losers::losers() : s1(""), s2(""){}
losers::~losers() {}

std::string losers::get_s1() const { return s1; }
std::string losers::get_s2() const { return s2; }

void losers::parse_input(char *av[], int ac)
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        exit(1);
    }
    if (std::string(av[2]).empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        exit(1);
    }
    s1 = std::string(av[2]);
    s2 = std::string(av[3]);
}

std::string losers::get_line(std::string& line)
{
    std::string result;
    size_t pos = line.find(s1);
    while (pos != std::string::npos)
    {
        result += line.substr(0, pos) + s2;
        line = line.substr(pos + s1.length());
        pos = line.find(s1);
    }
    return result + line;
}