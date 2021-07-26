#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const static int	MAX_NOTE;
		const static int	MIN_NOTE;
		const std::string	m_name;
		int					m_grade;

		void is_valid_grade( int note ) const;
	public:
		Bureaucrat( const std::string &name, int grade );
		virtual ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);

		const std::string &getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();

		void signForm( Form &form ) const;

		struct GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		struct GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<( std::ostream &os, const Bureaucrat &bureaucrat );

#endif