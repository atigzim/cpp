#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <istream>
#include <string>

class Bureaucrat
{

	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		// std::string GradeTooHighException();
		// std::string GradeTooLowException();

		std::string getName();
		int 		getGrade();

		void		increment();
		void		decrement();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif