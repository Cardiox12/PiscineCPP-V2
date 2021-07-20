#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &src);

		void makeSound() const;
};

#endif