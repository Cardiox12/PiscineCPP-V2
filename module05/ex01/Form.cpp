#include "Form.hpp"

const int Form::MAX_GRADE = 1;
const int Form::MIN_GRADE = 150;

Form::Form( const std::string name, int sign_grade, int exec_grade ) :
	m_name( name ),
	m_signed( false )
{
	if ( sign_grade < Form::MAX_GRADE || exec_grade < Form::MAX_GRADE ){
		throw Form::GradeTooHigh();
	} else if ( sign_grade > Form::MIN_GRADE || exec_grade > Form::MIN_GRADE ){
		throw Form::GradeTooLow();
	}
	m_sign_grade = sign_grade;
	m_exec_grade = exec_grade;
}

Form::Form(const Form &src) {
	m_signed = src.m_signed;
	m_sign_grade = src.m_sign_grade;
	m_exec_grade = src.m_sign_grade;
}

Form::~Form() {};

Form&
Form::operator=(const Form &src) {
    if (this == &src)
		return (*this);
	m_signed = src.m_signed;
	m_sign_grade = src.m_sign_grade;
	m_exec_grade = src.m_sign_grade;
    return (*this);
}

void 
Form::beSigned( const Bureaucrat &bureaucrat ) {
	int grade = bureaucrat.getGrade();

	if ( grade < m_sign_grade ){
		throw GradeTooHigh();
	}
	if ( grade > m_sign_grade ){
		throw GradeTooLow();
	}
	m_signed = true;
}

const std::string&
Form::getName() const { return m_name; }

bool
Form::getSigned() const { return m_signed; }

int
Form::getSignGrade() const { return m_sign_grade; }

int
Form::getExecGrade() const { return m_exec_grade; }

const char*
Form::GradeTooHigh::what() const throw() {
	return "Grade too high";
}

const char*
Form::GradeTooLow::what() const throw() {
	return "Grade too low";
}

std::ostream&
operator<<( std::ostream &os, const Form &form ){
	os << "<Form, " << form.getName() 
		<< ", Sign Grade=" << form.getSignGrade()
		<< ", Exec Grade=" << form.getExecGrade()
		<< ">";
	return os;
}