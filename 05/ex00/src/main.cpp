#include "../inc/Bureaucrat.hpp"
#include <ostream>

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

int main()
{
	Bureaucrat b1("hey", 150);
        // b1.demote();
    std::cout << b1 << std::endl;
	// try
    // {
    //     Bureaucrat b1("bureaucrat name", 150);
    //     b1.demote();
    //     std::cout << b1 << std::endl;
    // }
    // catch(const std::exception& e)
    // {
	// 	std::cout << "oops, you seem to have an error." << std::endl;
    //     std::cerr << e.what() << '\n';
    // }
    std::cout << "hello\n";
    return 0;
}