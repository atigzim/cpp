#include "ScalarConverter.hpp"

void ScalarConverter::PrintChar(const std::string &str)
{
    char h = str[0];

    std::cout << "char   : " << h << std::endl;
    std::cout << "int    : " << static_cast<int>(h) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float  : " << static_cast<float>(h) << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(h) << std::endl;
}

void ScalarConverter::PrintInt(const std::string &str)
{
    
	int h = std::stoi(str);
    if(h > 127 && h < 0)
        std::cout << "char    : impossible"<< std::endl;
    else if (std::isprint(static_cast<char>(h)) && h > 32)
	    std::cout << "char   : " << static_cast<char>(h) << std::endl;
    else
        std::cout << "char   : " << "Non displayable"<< std::endl;
    std::cout << "int    : " << h << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float  : " << static_cast<float>(h) << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(h) << std::endl;
}
void ScalarConverter::PrintDouble(const std::string &str)
{
    double h = std::stod(str);
    if(h > 127 || h < 0)
        std::cout << "char   : impossible"<< std::endl;
    else if (std::isprint(static_cast<char>(h)) && h > 32)
	    std::cout << "char   : " << static_cast<char>(h) << std::endl;
    else
        std::cout << "char   : " << "Non displayable"<< std::endl;
    if (std::stoll(str) < INT_MIN || std::stoll(str) > INT_MAX)
        std::cout << "int    : impossible"<< std::endl;
    else
        std::cout << "int    : " << static_cast<int>(h) << std::endl;  
    std::cout << std::fixed << std::setprecision(1);
    if (std::numeric_limits<float>::max() || -std::numeric_limits<float>::max())
        std::cout << "float  : impossible"<< std::endl;
    else
        std::cout << "float  : " << static_cast<float>(h) << "f" << std::endl;
    if (std::numeric_limits<double>::max() || -std::numeric_limits<double>::max())
        std::cout << "double : impossible"<< std::endl;
    else
        std::cout << "double : " << static_cast<double>(h) << std::endl;
}

void ScalarConverter::PrintFloat(const std::string &str)
{
    double h = std::stod(str);
    if(h > 127 || h < 0)
        std::cout << "char   : impossible"<< std::endl;
    else if (std::isprint(static_cast<char>(h)) && h > 32)
	    std::cout << "char   : " << static_cast<char>(h) << std::endl;
    else
        std::cout << "char   : " << "Non displayable"<< std::endl;
    if (std::stoll(str) < INT_MIN || std::stoll(str) > INT_MAX)
        std::cout << "int    : impossible"<< std::endl;
    else
        std::cout << "int    : " << static_cast<int>(h) << std::endl;  
    std::cout << std::fixed << std::setprecision(1);
    if (std::numeric_limits<float>::max() || -std::numeric_limits<float>::max())
        std::cout << "float  : impossible"<< std::endl;
    else
        std::cout << "float  : " << static_cast<float>(h) << "f" << std::endl;
    if (std::numeric_limits<double>::max() || -std::numeric_limits<double>::max())
        std::cout << "double : impossible"<< std::endl;
    else
        std::cout << "double : " << static_cast<double>(h) << std::endl;
}

void ScalarConverter::convert(const std::string &input)
{
    if(TypeInput::pseudo_literalsF(input))
    {
        std::cout << "char   : impossible"<< std::endl;
        std::cout << "int    : impossible"<< std::endl;
        std::cout << "float  : " << input << std::endl;
        std::cout << "double : " << input.substr(0, input.size() - 1) << std::endl;
        exit(0);
    }
    else if(TypeInput::pseudo_literals(input))
    {
        std::cout << "char   : impossible"<< std::endl;
        std::cout << "int    : impossible"<< std::endl;
        std::cout << "float  : " << input << "f" <<std::endl;
        std::cout << "double : " << input << std::endl;
        exit(0);
    }
	Type type = TypeInput::type_input(input);
    if (type == NONE)
    {
        std::cerr << "Invalid Type, ONLY : CHAR, INT, FLOAT and DOUBLE ALLOWED"  << std::endl;
        std::cerr << "NOTE FOR CHAR IT MUST BE WITH THIS FORMAT : ex: ./convert \"\'a'\""  << std::endl;
        return ;
    }
	if(type == CHAR)
		PrintChar(input);
	else if (type == INT)
		PrintInt(input);
    else if (type == FLOAT)
        PrintFloat(input);
    else if (type == DOUBLE)
        PrintDouble(input);
}
