#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) :
	m_name( name ),
	m_hit_points( 10 ),
	m_energy_point( 10 ),
	m_attack_damage( 0 ) {
	std::cout << "ClapTrap: " << m_name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ){
	m_name = other.m_name;
	m_hit_points = other.m_hit_points;
	m_energy_point = other.m_energy_point;
	m_attack_damage = other.m_attack_damage;
	std::cout << "ClapTrap: " << m_name << " copy is alive!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: " << m_name << " is dying ... end has never been closer!" << std::endl;
}

ClapTrap&
ClapTrap::operator=( const ClapTrap &other ) {
	if (this != &other)
		*this = other;
	std::cout << "ClapTrap: " << m_name << " assignation is alive!" << std::endl;
	return *this;
}

void
ClapTrap::attack( std::string const &target ) {
	std::cout << "ClapTrap: " << m_name << " attacks " << target << ", causing " << m_hit_points << " points of damage" << std::endl;
}

void
ClapTrap::takeDamage( unsigned int amount ) {
	unsigned int new_energy_points = m_energy_point - amount;

	std::cout << "ClapTrap: " << m_name << " being attacked with " << amount << " damage points." << std::endl;
	if ( new_energy_points < 0 )
		m_energy_point = 0;
	m_energy_point = new_energy_points;
}

void
ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "ClapTrap: " << m_name << " is being repaired with " << amount << " amounts of energy points." << std::endl;
	m_energy_point += amount;
}
