#ifndef ICharacter_HPP
# define ICharacter_HPP

# include <string>
# include "AMateria.hpp"

# define MATERIA_INVENTORY_SIZE 4

class ICharacter
{
	private:
		AMateria *m_inventory[MATERIA_INVENTORY_SIZE];
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif