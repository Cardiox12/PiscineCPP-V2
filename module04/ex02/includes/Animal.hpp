#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string type;
	public:
		virtual ~Animal();
		const std::string &getType() const;
		virtual void makeSound() const = 0;
};

#endif
