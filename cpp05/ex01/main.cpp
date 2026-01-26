#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "=== Test 1: Valid Form Creation ===" << std::endl;
    try {
        Form form1("Tax Form", 50, 25);
        std::cout << form1 << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Invalid Form - Grade Too High ===" << std::endl;
    try {
        Form form2("Invalid Form", 0, 50);
    }
    catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Invalid Form - Grade Too Low ===" << std::endl;
    try {
        Form form3("Invalid Form", 50, 200);
    }
    catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Successful Signing ===" << std::endl;
    try {
        Bureaucrat alice("Alice", 30);
        Form form4("Contract", 50, 25);
        
        std::cout << "Before signing: " << form4 << std::endl;
        alice.signForm(form4);
        std::cout << "After signing: " << form4 << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Failed Signing - Grade Too Low ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 100);
        Form form5("Important Document", 50, 25);
        
        std::cout << "Before signing attempt: " << form5 << std::endl;
        bob.signForm(form5); // Bob's grade (100) > required (50), so fails
        std::cout << "After signing attempt: " << form5 << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 6: Edge Case - Exact Grade Match ===" << std::endl;
    try {
        Bureaucrat charlie("Charlie", 50);
        Form form6("Report", 50, 25);
        
        charlie.signForm(form6); // Exact match should work
        std::cout << form6 << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 7: Multiple Sign Attempts ===" << std::endl;
    try {
        Bureaucrat dave("Dave", 1);
        Form form7("Application", 100, 50);
        
        dave.signForm(form7);  // First sign - success
        std::cout << "First sign: " << form7 << std::endl;
        
        dave.signForm(form7);  // Second sign - already signed
        std::cout << "Second sign: " << form7 << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 8: High-Level Bureaucrat ===" << std::endl;
    try {
        Bureaucrat ceo("CEO", 1);
        Form form8("Top Secret", 1, 1);
        
        ceo.signForm(form8);
        std::cout << form8 << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 9: Low-Level Bureaucrat ===" << std::endl;
    try {
        Bureaucrat intern("Intern", 150);
        Form form9("Simple Task", 150, 150);
        
        intern.signForm(form9);
        std::cout << form9 << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}