#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"
# include <string>
# include <iostream>

class Ice : public AMateria {
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);

		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif