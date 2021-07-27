#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void){
	ShrubberyCreationForm form("bite");
	Bureaucrat a("Sign", 145);
	Bureaucrat b("Exec", 137);

	a.signForm(form);
	b.executeForm(form);
	return (0);
}