#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &src );
		~ScavTrap();
		ScavTrap& operator=( ScavTrap const &other );

		void guardGate();
		void attack( std::string const &target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif
