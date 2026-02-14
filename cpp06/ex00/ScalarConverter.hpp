#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include <cctype>
#include <climits>
#include <limits>
#include "TypeInput.hpp"

class ScalarConverter
{
private:
static void PrintChar(const std::string &str);
static void PrintInt(const std::string &str);
static void PrintDouble(const std::string &str);
static void PrintFloat(const std::string &str);
	
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();
	static void convert(const std::string &str);
	
};



#endif