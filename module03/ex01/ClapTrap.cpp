#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) :
	m_name( name ),
	m_hit_points( 10 ),
	m_energy_point( 10 ),
	m_attack_damage( 0 ) {
		std::cout << m_name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ){
	m_name = other.m_name;
	m_hit_points = other.m_hit_points;
	m_energy_point = other.m_energy_point;
	m_attack_damage = other.m_attack_damage;
	std::cout << m_name << " is alive thanks to other!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << m_name << " is dying ... end has never been closer!" << std::endl;
}

ClapTrap&
ClapTrap::operator=( const ClapTrap &other ) {
	if (this == &other)
		*this = other;
	std::cout << m_name << " is alive thanks to other!" << std::endl;
	return *this;
}

void
ClapTrap::attack( std::string const &target ) {
	std::cout << m_name << " attacks " << target << ", causing " << m_hit_points << " points of damage" << std::endl;
}

void
ClapTrap::takeDamage( unsigned int amount ) {
	unsigned int new_energy_points = m_energy_point - amount;

	std::cout << m_name << " being attacked with " << amount << " damage points." << std::endl;
	if ( new_energy_points < 0 )
		m_energy_point = 0;
	m_energy_point = new_energy_points;
}

void
ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << m_name << " is being repaired with " << amount << " amounts of energy points." << std::endl;
	m_energy_point += amount;
}

/* ----------------- Getters ----------------- */

const std::string &ClapTrap::getName() const {
	return m_name;
}

void ClapTrap::setName( std::string new_name ){
	m_name = new_name;
}

int ClapTrap::getHitPoints() const {
	return m_hit_points;
}

void ClapTrap::setHitPoints( int hit_points ) {
	m_hit_points = hit_points;
}

int ClapTrap::getEnergyPoints() const {
	return m_energy_point;
}

void ClapTrap::setEnergyPoints( int energy_points ) {
	m_energy_point = energy_points;
}

int ClapTrap::getAttackDamage() const {
	return m_attack_damage;
}

void ClapTrap::setAttackDamage( int attack_damage ) {
	m_attack_damage = attack_damage;
}