#include <iostream>
#include "Form.hpp"

int		main(void){
	Bureaucrat bureaucrat("Eddy", 100);
	Form too_high_form("Form 2B", 10, 10);
	Form too_low_form("Form 2B", 101, 100);
	Form form("Form 2B", 100, 100);

	bureaucrat.signForm( form );
	bureaucrat.signForm( too_high_form );
	bureaucrat.signForm( too_low_form );

	std::cout << form << std::endl;
	std::cout << too_high_form << std::endl;
	std::cout << too_low_form << std::endl;

	try {
		Form f("Form", 160, 1);
	} catch ( std::exception &e ){
		std::cout << e.what() << std::endl;
	}

	try {
		Form f("Form", -1, 1);
	} catch ( std::exception &e ){
		std::cout << e.what() << std::endl;
	}

	try {
		Form f("Form", 1, 160);
	} catch ( std::exception &e ){
		std::cout << e.what() << std::endl;
	}

	try {
		Form f("Form", 1, -1);
	} catch ( std::exception &e ){
		std::cout << e.what() << std::endl;
	}
	return (0);
}