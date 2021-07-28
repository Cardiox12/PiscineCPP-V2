#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string &target )
	: Form("PresidentialPardonForm", 25, 5 ), m_target( target ) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) 
	: Form( src )
{
	m_target = src.m_target;
}

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm&
PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this == &src)
		return (*this);
	Form::operator=(src);
	m_target = src.m_target;
    return (*this);
}

void
PresidentialPardonForm::execute( const Bureaucrat &executor ) const {
	try {
		isExecutable( executor );
	} catch ( std::exception &e ){
		throw;
	}
	if ( this->getSigned() ){
		std::cout << "Zafod Beeblebrox pardon " << m_target << std::endl;
	} else {
		throw FormNotSigned();
	}
}