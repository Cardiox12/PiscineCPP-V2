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

		const std::string &getName() const;
		void setName( std::string new_name );

		int getHitPoints() const;
		void setHitPoints( int hit_points );

		int getEnergyPoints() const;
		void setEnergyPoints( int energy_points );

		int getAttackDamage() const;
		void setAttackDamage( int attack_damage );
};

#endif
