#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"
# include <string>

class Cure : public AMateria {
	public:
		Cure();
		virtual ~Cure();
        Cure(const Cure &src);
        Cure &operator=(const Cure &src);

		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif