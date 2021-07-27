#include "Bureaucrat.hpp"

const int Bureaucrat::MAX_NOTE = 1;
const int Bureaucrat::MIN_NOTE = 150;

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : m_name( name ) {
	try {
		is_valid_grade( grade );
		m_grade = grade;
	} catch ( std::exception &e ){
		throw;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	m_grade = src.m_grade;
}

Bureaucrat::~Bureaucrat() {};

Bureaucrat&
Bureaucrat::operator=(const Bureaucrat &src) {
    if (this == &src)
		return (*this);
	m_grade = src.m_grade;
    return (*this);
}

void
Bureaucrat::is_valid_grade( int note ) const {
	if ( note < MAX_NOTE )
		throw GradeTooHighException();
	if ( note > MIN_NOTE )
		throw GradeTooLowException();
}

const std::string& Bureaucrat::getName() const {
	return m_name;
}

int
Bureaucrat::getGrade() const {
	return m_grade;
}

void
Bureaucrat::incGrade() {
	try {
		is_valid_grade( m_grade - 1 );
		m_grade--;
	} catch ( std::exception &e ) {
		throw;
	}
}

void
Bureaucrat::decGrade() {
	try {
		is_valid_grade( m_grade + 1 );
		m_grade++;
	} catch ( std::exception &e ) {
		throw;
	}
}

void
Bureaucrat::signForm( Form &form ) const {
	try {
		form.beSigned( *this );
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	} catch ( std::exception &e ){
		std::cout << this->getName() << " cannot sign because " << e.what() << std::endl;
	}
}

void
Bureaucrat::executeForm( Form &form ) const {
	try {
		form.execute( *this );
		std::cout << this->getName() << " execute " << form.getName() << std::endl;
	} catch ( std::exception &e ){
		std::cout << this->getName() << " cannot execute because " << e.what() << std::endl;
	}
}

const char*
Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char*
Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::ostream&
operator<<( std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
