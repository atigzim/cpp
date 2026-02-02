#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat bob("Bob", 1);
        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("Bender");
        PresidentialPardonForm pardonForm("Alice");

        bob.signForm(shrubberyForm);
        shrubberyForm.execute(bob);

        bob.signForm(robotomyForm);
        robotomyForm.execute(bob);

        bob.signForm(pardonForm);
        pardonForm.execute(bob);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}