#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : 
	m_name( name ),
	m_hit_points( 10 ),
	m_energy_points( 10 ),
	m_attack_damage( 0 ) 
{
	std::cout << "ClapTrap: " << m_name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	m_name = src.m_name;
	m_hit_points = src.m_hit_points;
	m_energy_points = src.m_energy_points;
	m_attack_damage = src.m_attack_damage;

	std::cout << "ClapTrap: " << m_name << " is alive by copy!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: " << m_name << " is dying, end has never been so close!" << std::endl;
};

ClapTrap&
ClapTrap::operator=(const ClapTrap &src) {
	if (this == &src){
		return *this;
	}
	m_name = src.m_name;
	m_hit_points = src.m_hit_points;
	m_energy_points = src.m_energy_points;
	m_attack_damage = src.m_attack_damage;
	std::cout << "ClapTrap: " << m_name << " is alive by assignation!" << std::endl;
    return (*this);
}

void
ClapTrap::attack( std::string const &target ) {
	std::cout << "ClapTrap: " << m_name << " attacks " << target << " with " << m_attack_damage << " damages." << std::endl;
}

void
ClapTrap::takeDamage( unsigned int amount ) {
	int real_damage = m_energy_points - amount;

	if ( real_damage < 0 )
		m_energy_points = 0;
	else
		m_energy_points = real_damage;
	
	std::cout << "ClapTrap: " << m_name << " takes " << amount << " damages." << std::endl;
}

void
ClapTrap::beRepaired( unsigned int amount ) {
	m_energy_points += amount;

	std::cout << "ClapTrap: " << m_name << " repaired with " << amount << " points of energy." << std::endl;
}
