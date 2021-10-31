#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap: " << getName() << " is alive!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap( src ) {
	std::cout << "ScavTrap: " << getName() << " is alive by copy!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: " << getName() << " is dying, end has never been so close!" << std::endl;
};

ScavTrap&
ScavTrap::operator=(const ScavTrap &src) {
	if (this == &src)
		return (*this);
	setName( src.getName() );
	setHitPoints( src.getHitPoints() );
	setEnergyPoints( src.getEnergyPoints() );
	setAttackDamage( src.getAttackDamage() );
	std::cout << "ScavTrap: " << getName() << " is alive by assignation!" << std::endl;
	return (*this);
}

void
ScavTrap::attack( const std::string &name ) {
	std::cout << "ScavTrap: " << getName() << " attacks " << name << " with " << getAttackDamage() << " damages." << std::endl;
}

void
ScavTrap::beRepaired( unsigned int amount ) {
	setEnergyPoints( getEnergyPoints() + amount );

	std::cout << "ScavTrap: " << getName() << " repaired with " << amount << " points of energy." << std::endl;
}

void
ScavTrap::takeDamage( unsigned int amount ) {
	int real_damage = getEnergyPoints() - amount;

	if ( real_damage < 0 )
		setEnergyPoints(0);
	else
		setEnergyPoints(real_damage);
	
	std::cout << "ScavTrap: " << getName() << " takes " << amount << " damages." << std::endl;
}

void
ScavTrap::guardGate() {
	std::cout << "ScavTrap: " << getName() << " is guarding the gate." << std::endl;
}