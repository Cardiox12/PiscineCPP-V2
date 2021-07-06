#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string	m_name;
		Weapon		*m_weapon;
	public:
		HumanB( std::string m_name );
		~HumanB();
		
		void setWeapon( Weapon *newWeapon );
		void attack() const;
};

#endif
