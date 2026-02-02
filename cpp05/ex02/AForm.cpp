#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
    : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
    _checkGrade(gradeToSign);
    _checkGrade(gradeToExecute);
    std::cout << "Form " << name << " created (sign: " << _gradeToSign 
              << ", exec: " << _gradeToExecute << ")" << std::endl;
}

AForm::AForm(const AForm& other) : _name(other._name), _gradeToSign(other._gradeToSign),
_gradeToExecute(other._gradeToExecute), _isSigned(false)
{
}

AForm::~AForm()
{
}

AForm& AForm::operator=(const AForm &other) throw()
{
	if (&other != this)
	{
		this->_isSigned = other._isSigned;
	}
	return (*this);
}

void AForm::_checkGrade(int grade) const {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign) {
        throw GradeTooLowException();
    }
	_isSigned = true;
}

const std::string& AForm::getName() const
{
	return(_name);
}

int AForm::getGradeToSign() const
{
	return(_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return(_gradeToExecute);
}

bool AForm::isSigned() const
{
	return(_isSigned);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
    out << "Form " << form.getName()
        << ", signed: " << (form.isSigned() ? "yes" : "no")
        << ", grade to sign " << form.getGradeToSign()
        << ", grade to execute " << form.getGradeToExecute();
    return out;
}


