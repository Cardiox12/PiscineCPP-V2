#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);

		virtual void makeSound() const;
};

#endif