#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

# include <string>
# include <stdexcept>

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

		struct GradeTooHighException : public std::exception {
			virtual const char *what() const throw() {
				return "Grade too high";
			}
		};

		struct GradeTooLowException : public std::exception {
			virtual const char *what() const throw() {
				return "Grade too low";
			}
		};
};

#endif