#ifndef Character_HPP
# define Character_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		AMateria	*m_inventory[MATERIA_INVENTORY_SIZE];
		int			m_cursor;
		std::string	m_name;
	public:
		Character( const std::string &name );
		virtual ~Character();
		Character(const Character &src);
		Character &operator=(const Character &src);

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif