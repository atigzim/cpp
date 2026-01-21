#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if(this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
	this->grade = other.grade;
}

void	Bureaucrat::increment()
{
	grade++;
}

void	Bureaucrat::decrement()
{
	grade--;
}
std::string Bureaucrat::getName()
{
	return (name);
}
int Bureaucrat::getGrade()
{
	return(grade);
}
std::ostream &operator<<(std::ostream &out,  Bureaucrat &bureaucrat)
{
	out << bureaucrat.getGrade();
}