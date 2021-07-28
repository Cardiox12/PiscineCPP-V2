#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
	private:
		std::string m_target;
	public:
		ShrubberyCreationForm( const std::string &target );
		virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

		void execute( const Bureaucrat &executor ) const;
};

#endif