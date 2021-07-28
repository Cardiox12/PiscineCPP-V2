#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ) 
	: Form( "RobotomyRequestForm", 72, 45 ), m_target( target )
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) 
	: Form( src ), m_target( src.m_target ) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&
RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this == &src)
		return (*this);
	Form::operator=(src);
	m_target = src.m_target;
    return (*this);
}

void
RobotomyRequestForm::execute( const Bureaucrat &executor ) const {
	try {
		isExecutable( executor );
	} catch ( std::exception &e ){
		throw;
	}
	if ( this->getSigned() ){
		double r = ((double) rand() / (RAND_MAX));

		if ( r > 0.5 ){
			std::cout << "Successfuly robotomized " << m_target << std::endl;
		} else {
			std::cout << "Failed to robotomize " << m_target << std::endl;
		}
	} else {
		throw FormNotSigned();
	}
}