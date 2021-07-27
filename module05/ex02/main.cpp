#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	shrubbery_test() {
	ShrubberyCreationForm form("home");
	Bureaucrat a("Sign", 145);
	Bureaucrat b("Exec", 137);

	a.signForm(form);
	b.executeForm(form);
}

void	presidential_pardon_test() {
	PresidentialPardonForm form("Ford Prefect");
	Bureaucrat a("Arthur", 25);
	Bureaucrat b("Zafod", 5);

	a.signForm(form);
	b.executeForm(form);
}

int		main(void){
	presidential_pardon_test();
	return (0);
}