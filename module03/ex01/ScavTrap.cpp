#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap: " << getName() << " is alive!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap( other ) {
	std::cout << "ScavTrap: " << getName() << " copy is alive!" << std::endl;
}

ScavTrap::~ScavTrap() {}

ScavTrap&
ScavTrap::operator=( ScavTrap const & other )
{
	if ( this != &other )
		*this = other;
	std::cout << "ScavTrap: " << getName() << " assignation is alive!" << std::endl;
	return *this;
}

void
ScavTrap::guardGate(){
	std::cout << "ScavTrap: " << getName() << " has entered in Gate Keeper mode." << std::endl;
}

void
ScavTrap::attack( std::string const &name ){
	std::cout << "ScavTrap: " << getName() << " attacks " << name << std::endl;
}

void
ScavTrap::takeDamage( unsigned int amount ) {
	unsigned int new_energy_points = getEnergyPoints() - amount;

	std::cout << "ScavTrap: " << getName() << " takes " << amount << " damages" << std::endl;
	if ( new_energy_points < 0 )
		setEnergyPoints(0);
	setEnergyPoints(new_energy_points);
}

void
ScavTrap::beRepaired( unsigned int amount ) {
	std::cout << "ScavTrap: " << getName() << " being repaired with " << amount << " energy point." << std::endl;
	setEnergyPoints(amount);
}
