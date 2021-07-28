#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <time.h>
# include <stdlib.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string m_target;
	public:
		RobotomyRequestForm( const std::string &target );
		virtual ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		void execute( const Bureaucrat &executor ) const;
};

#endif