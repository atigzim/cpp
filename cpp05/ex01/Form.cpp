#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
    _checkGrade(gradeToSign);
    _checkGrade(gradeToExecute);
    std::cout << "Form " << name << " created (sign: " << _gradeToSign 
              << ", exec: " << _gradeToExecute << ")" << std::endl;
}

Form::Form(const Form& othed) : _name(othed._name), _gradeToSign(othed._gradeToSign),
_gradeToExecute(othed._gradeToExecute), _isSigned(false)
{
}

Form::~Form()
{
}

Form& Form::operator=(const Form &othed) throw()
{
	if (&othed != this)
	{
		this->_isSigned = othed._isSigned;
	}
	return (*this);
}

void Form::_checkGrade(int grade) const {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign) {
        throw GradeTooLowException();
    }
	_isSigned = true;
}

const std::string& Form::getName() const
{
	return(_name);
}

int Form::getGradeToSign() const
{
	return(_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return(_gradeToExecute);
}

bool Form::isSigned() const
{
	return(_isSigned);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << "Form " << form.getName()
        << ", signed: " << (form.isSigned() ? "yes" : "no")
        << ", grade to sign " << form.getGradeToSign()
        << ", grade to execute " << form.getGradeToExecute();
    return out;
}


