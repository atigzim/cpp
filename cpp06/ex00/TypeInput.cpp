#include "TypeInput.hpp"

TypeInput::TypeInput()
{
}

TypeInput::~TypeInput()
{
}

TypeInput::TypeInput(const TypeInput &other)
{
	// return (*this);
}

TypeInput TypeInput::operator=(const TypeInput &other)
{
	return (*this);
}
// -inff, +inff,
// and nanf.
bool TypeInput::pseudo_literalsF(const std::string& input)
{
    if (input == "-inff" || input == "+inff" || input == "nanf")
        return (true);
    return (false);
}
bool TypeInput::pseudo_literals(const std::string& input)
{
    if (input == "-inf" || input == "+inf" || input == "nan")
        return (true);
    return (false);
}

bool TypeInput::isChar(const std::string& input)
{
    if (input.size() > 1)
        return(false);
    if (!std::isprint(input[0]))
        return (false);
    return true;
}

bool TypeInput::isInt(const std::string& input)
{
    size_t i = 0;
    while (i < input.size() && input[i] <= 32)
        i++;
    if (i < input.size() && (input[i] == '-' || input[i] == '+'))
        i++;
    if (i >= input.size())
        return false;
    while (i < input.size())
    {
        if (input[i] < '0' || input[i] > '9')
            return false;
        i++;
    }
    if (std::stoll(input) < INT_MIN || std::stoll(input) > INT_MAX)
        return (false);
    return true;
}

bool TypeInput::isFloat(const std::string& input)
{
    size_t i = 0;
	bool hasdot = false;
	bool hasnumb = false;
    bool f = false;
    while (i < input.size() && input[i] <= 32)
        i++;
	if (i < input.size() && (input[i] == '-' || input[i] == '+'))
        i++;
    if (i >= input.size())
        return false;
	while (i < input.size())
	{
		if (((input[i] >= '0' && input[i] <= '9')
            ||input[i] == 'f') && !f)
        {
            if (input[i] == 'f')
                f = true;
			hasnumb = true;
        }
		else if (input[i] == '.' && !hasdot)
        {
            hasnumb = false;
			hasdot = true;
        }
		else 
			return (false);
		i++;
	}
	if (!hasdot || !hasnumb || !f)
		return (false);
	return (true);
}

bool TypeInput::isDoubel(const std::string& input)
{
    size_t i = 0;
	bool hasdot = false;
	bool hasnumb = false;
    
    while (i < input.size() && input[i] <= 32)
        i++;
	if (i < input.size() && (input[i] == '-' || input[i] == '+'))
        i++;
    if (i >= input.size())
        return false;
	while (i < input.size())
	{
		if (input[i] >= '0' && input[i] <= '9')
			hasnumb = true;
		else if (input[i] == '.' && !hasdot)
        {
            hasnumb = false;
			hasdot = true;
        }
		else 
			return (false);
		i++;
	}
	if (!hasdot || !hasnumb)
		return (false);
	return (true);
}

Type TypeInput::type_input(const std::string& input)
{
    if (isInt(input))
        return (INT);
    else if (isFloat(input))
        return (FLOAT);
    else if (isDoubel(input))
        return (DOUBLE);
    else if (isChar(input))
        return (CHAR);
    else
        return(NONE);
}

