#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap( std::string name );
		virtual ~FragTrap();
		FragTrap(const FragTrap &src);
		FragTrap &operator=(const FragTrap &src);

		void attack( const std::string &name );
		void beRepaired( unsigned int amount );
		void takeDamage( unsigned int amount );
		void highFivesGuys();
};

#endif