#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

class RobotomyRequestForm {
	private:

	public:
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
};

#endif