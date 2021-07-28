#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string m_target;
	public:
		PresidentialPardonForm( const std::string &target );
		virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		void execute( const Bureaucrat &executor ) const;
};

#endif