#include "Intern.hpp"

const Intern::FormDict Intern::callbacks[3] = {
	{"shrubbery creation", Intern::createShrubberyCreationForm},
	{"presidential pardon", Intern::createPresidentialPardonForm},
	{"robotomy request", Intern::createRobotomyRequestForm}
};

Intern::Intern() {}

Intern::Intern(const Intern &src) { (void)src; }

Intern::~Intern() {}

Intern&
Intern::operator=(const Intern &src) {
    if (this == &src)
		return (*this);
    return (*this);
}

Form*
Intern::createShrubberyCreationForm( const std::string &target ){
	return new ShrubberyCreationForm( target );
}

Form*
Intern::createPresidentialPardonForm( const std::string &target ){
	return new PresidentialPardonForm( target );
}

Form*
Intern::createRobotomyRequestForm( const std::string &target ){
	return new RobotomyRequestForm( target );
}

Form*
Intern::makeForm( const std::string &formName, const std::string &target ){
	for ( int index = 0 ; index < FORM_CREATION_CALLBACK_SIZE ; index++ ){
		if ( formName == this->callbacks[index].key ){
			std::cout << "Intern creates " << formName << " form" << std::endl;
			return this->callbacks[index].fn( target );
		}
	}
	std::cout << "Intern cannot create form, " << formName << " not found" << std::endl;
	return NULL;
}