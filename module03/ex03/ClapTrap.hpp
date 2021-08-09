#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <string>
# include <iostream>

class ClapTrap {
	private:
		std::string m_name;
		int			m_hit_points;
		int			m_energy_points;
		int			m_attack_damage;
	public:
		ClapTrap( std::string name );
		virtual ~ClapTrap();
        ClapTrap(const ClapTrap &src);
        ClapTrap &operator=(const ClapTrap &src);

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
