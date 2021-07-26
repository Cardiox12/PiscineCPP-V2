#ifndef Form_HPP
# define Form_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const static int	MAX_GRADE;
		const static int	MIN_GRADE;
		const std::string	m_name;
		bool				m_signed;
		int					m_sign_grade;
		int					m_exec_grade;
	public:
		Form( const std::string name, int sign_grade, int exec_grade );
		virtual ~Form();
        Form(const Form &src);
        Form &operator=(const Form &src);

		const std::string &getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned( const Bureaucrat &bureaucrat );

		struct GradeTooHigh : public std::exception {
			virtual const char *what() const throw();
		};

		struct GradeTooLow : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<( std::ostream &os, const Form &form );

#endif