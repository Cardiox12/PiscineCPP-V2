#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

class PresidentialPardonForm {
	private:

	public:
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
};

#endif