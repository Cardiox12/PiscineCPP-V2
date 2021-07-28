#ifndef Intern_HPP
# define Intern_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

# define FORM_CREATION_CALLBACK_SIZE 3

class Intern {
	private:
		typedef Form* (*create_form_callback)( const std::string &target );
		struct FormDict {
			std::string				key;
			create_form_callback	fn;
		};
		static Form *createShrubberyCreationForm( const std::string &target );
		static Form *createPresidentialPardonForm( const std::string &target );
		static Form *createRobotomyRequestForm( const std::string &target );
		static const FormDict callbacks[FORM_CREATION_CALLBACK_SIZE];
	public:
		Intern();
		virtual ~Intern();
        Intern(const Intern &src);
        Intern &operator=(const Intern &src);

		Form *makeForm( const std::string &formName, const std::string &target );
};

#endif