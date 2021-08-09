#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		
		ScavTrap();
	public:
		ScavTrap( std::string name );
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &src);

		void attack( const std::string &name );
		void beRepaired( unsigned int amount );
		void takeDamage( unsigned int amount );
		void guardGate();
};

#endif
