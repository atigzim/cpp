#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat; 

class Form
{
private:
    const std::string _name;
    const int _gradeToSign;
    const int _gradeToExecute;
    bool _isSigned;
    
    void _checkGrade(int grade) const;

public:
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    Form(const Form& othed);
    ~Form();
    
    Form& operator=(const Form& othed) throw();
    
    const std::string& getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool isSigned() const;
    
    void beSigned(const Bureaucrat& bureaucrat);
    
    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif