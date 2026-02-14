#ifndef TYPEINPUT_HPP
# define TYPEINPUT_HPP
#include "ScalarConverter.hpp"
	enum Type
	{
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		NONE
	};
class TypeInput
{
	private:
		
	public:
		TypeInput();
		TypeInput(const TypeInput &other);
		TypeInput operator=(const TypeInput &other);
		~TypeInput();
		static bool isFloat(const std::string& input);
		static bool isInt(const std::string& input);
		static bool isChar(const std::string& input);
		static bool isDoubel(const std::string& input);
		static bool pseudo_literalsF(const std::string& input);
		static bool pseudo_literals(const std::string& input);
		static Type type_input(const std::string& input);

};

#endif