#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void test_scf(){
	Bureaucrat	signer("A", 145);
	Bureaucrat	executor("B", 137);
	Intern		someRandomIntern;
	Form		*rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	signer.signForm(*rrf);
	executor.executeForm(*rrf);

	delete rrf;
}

void test_pdf(){
	Bureaucrat	signer("A", 25);
	Bureaucrat	executor("B", 5);
	Intern		someRandomIntern;
	Form		*rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	signer.signForm(*rrf);
	executor.executeForm(*rrf);

	delete rrf;
}

void test_rrf(){
	Bureaucrat	signer("A", 72);
	Bureaucrat	executor("B", 45);
	Intern		someRandomIntern;
	Form		*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	signer.signForm(*rrf);
	executor.executeForm(*rrf);

	delete rrf;
}

void test_no_form(){
	Intern		someRandomIntern;
	Form		*rrf;

	rrf = someRandomIntern.makeForm("unknown form", "Bender");
}

int		main(void){
	srand(time(NULL));

	test_pdf();
	test_rrf();
	test_scf();
	test_no_form();
	return (0);
}