#include <iostream>
#include "Bureaucrat.hpp"

int		main(void){
	Bureaucrat a("A", 1);
	Bureaucrat d("D", 150);

	try {
		a.incGrade();
	} catch ( std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat b("B", 0);
	} catch ( std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat c("B", 151);
	} catch ( std::exception &e ){
		std::cerr << e.what() << std::endl;
	}

	try {
		d.decGrade();
	} catch ( std::exception &e ){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}