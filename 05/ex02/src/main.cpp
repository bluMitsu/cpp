#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

int main()
{
    std::cout<<"###############ShrubberyCreationForm################\n";
    try
    {
        Bureaucrat b1("bureaucrat name", 10);
        b1.demote();
        b1.demote();
        std::cout << b1 << std::endl;
        Form *f1 = new ShrubberyCreationForm("1Test_Shrubbery");
        b1.signForm(*f1);
        b1.executeForm(*f1);
		delete f1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout<<"\n###############RobotForm################\n";

    try
    {
        Bureaucrat b2("bureaucrat2 name", 10);
        b2.demote();
        std::cout << b2 << std::endl;
        Form *f2 = new RobotomyRequestForm("2Test_Robot");
        b2.signForm(*f2);
        b2.executeForm(*f2);
		delete f2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout<<"\n###############PresidentialPardon################\n";
    
    try
    {
        Bureaucrat b3("bureaucrat3 name", 1);
        b3.demote();
        std::cout << b3 << std::endl;
        Form *f3 = new PresidentialPardonForm("PresidentialPardon");
        b3.signForm(*f3);
        b3.executeForm(*f3);
		delete f3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout<<"\n###############PresidentialFailed################\n";
    
    try
    {
        Bureaucrat b3("bureaucrat3 name", 150);
        b3.demote();
        std::cout << b3 << std::endl;
        Form *f3 = new PresidentialPardonForm("PresidentialPardon");
		std::cout << f3 << std::endl;
        b3.signForm(*f3);
        b3.executeForm(*f3);
		delete f3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
