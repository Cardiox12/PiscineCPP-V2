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
		ClapTrap();
	public:
		ClapTrap( std::string name );
		virtual ~ClapTrap();
        ClapTrap(const ClapTrap &src);
        ClapTrap &operator=(const ClapTrap &src);

		void attack( std::string const &target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif
