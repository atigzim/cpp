#ifndef LOSERS_HPP
#define LOSERS_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class losers
{
private:
    std::string s1;
    std::string s2;
    
public:
    losers();
    ~losers();
    std::string get_s1() const;
    std::string get_s2() const;
    void parse_input(char *av[], int ac);
	std::string get_line(std::string& line);
};

#endif