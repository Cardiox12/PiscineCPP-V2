#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string m_name;
		int			m_hit_points;
		int			m_energy_point;
		int			m_attack_damage;

		ClapTrap();
	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &other );
		~ClapTrap();
		ClapTrap &operator=( const ClapTrap &other );

		void attack( std::string const &target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif
