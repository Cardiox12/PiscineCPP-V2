#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void	shrubbery_test() {
	ShrubberyCreationForm form("home");
	Bureaucrat a("A", 145);
	Bureaucrat b("B", 137);

	a.signForm(form);
	b.executeForm(form);

	// Cannot sign, grade too low
	form = ShrubberyCreationForm("A");
	a = Bureaucrat("A", 1);

	a.signForm(form);
	b.executeForm(form);

	// Cannot execute, grade too low
	form = ShrubberyCreationForm("A");
	a = Bureaucrat("A", 145);
	b = Bureaucrat("B", 130);

	a.signForm(form);
	b.executeForm(form);
}

void	presidential_pardon_test() {
	PresidentialPardonForm form("Ford Prefect");
	Bureaucrat a("Arthur", 25);
	Bureaucrat b("Zafod", 5);

	a.signForm(form);
	b.executeForm(form);

	// Cannot sign, grade too low
	form = PresidentialPardonForm("Ford Prefect");
	a = Bureaucrat("A", 1);

	a.signForm(form);
	b.executeForm(form);

	// Cannot execute, grade too low
	form = PresidentialPardonForm("Ford Prefect");
	a = Bureaucrat("A", 25);
	b = Bureaucrat("B", 1);

	a.signForm(form);
	b.executeForm(form);
}

void	robotomy_test() {
	RobotomyRequestForm form("Alpha");
	Bureaucrat a("A", 72);
	Bureaucrat b("B", 45);

	a.signForm(form);
	b.executeForm(form);
	
	// Cannot sign, grade too low
	form = RobotomyRequestForm("Alpha");
	a = Bureaucrat("A", 1);

	a.signForm(form);
	b.executeForm(form);

	// Cannot execute, grade too low
	form = RobotomyRequestForm("Alpha");
	a = Bureaucrat("A", 72);
	b = Bureaucrat("B", 44);

	a.signForm(form);
	b.executeForm(form);
}

int		main(void){
	srand(time(NULL));

	std::cout << "==============================================" << std::endl;
	presidential_pardon_test();
	std::cout << "==============================================" << std::endl;
	robotomy_test();
	std::cout << "==============================================" << std::endl;
	shrubbery_test();
	return (0);
}