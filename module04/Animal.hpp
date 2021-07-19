#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>

class Animal {
	protected:
		std::string m_type;
	public:
		Animal();
		virtual ~Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);

		virtual void makeSound() const;
		const std::string &getType() const;
};

#endif
