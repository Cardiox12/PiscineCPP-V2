#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);

		void makeSound() const;
};

#endif