#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string m_name;
	public:
		DiamondTrap( std::string name );
		virtual ~DiamondTrap();
        DiamondTrap(const DiamondTrap &src);
        DiamondTrap &operator=(const DiamondTrap &src);

		void attack( std::string const &target );
		void beRepaired( unsigned int amount );
		void takeDamage( unsigned int amount );
		void whoAmI();
};

#endif