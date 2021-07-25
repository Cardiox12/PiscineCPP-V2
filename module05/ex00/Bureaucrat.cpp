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

const std::string&
Bureaucrat::getName() const {
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