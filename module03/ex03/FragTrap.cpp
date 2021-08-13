#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap: " << getName() << " is alive!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap( src ) {
	std::cout << "FragTrap: " << getName() << " is alive by copy!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: " << getName() << " is dying, end has never been so close!" << std::endl;
};

FragTrap&
FragTrap::operator=(const FragTrap &src) {
	ClapTrap::operator=(src);
	std::cout << "FragTrap: " << getName() << " is alive by assignation!" << std::endl;
	return (*this);
}

void
FragTrap::attack( const std::string &name ) {
	std::cout << "FragTrap: " << getName() << " attacks " << name << " with " << getAttackDamage() << " damages." << std::endl;
}

void
FragTrap::beRepaired( unsigned int amount ) {
	setEnergyPoints( getEnergyPoints() + amount );

	std::cout << "FragTrap: " << getName() << " repaired with " << amount << " points of energy." << std::endl;
}

void
FragTrap::takeDamage( unsigned int amount ) {
	int real_damage = getEnergyPoints() - amount;

	if ( real_damage < 0 )
		setEnergyPoints(0);
	else
		setEnergyPoints(real_damage);
	
	std::cout << "FragTrap: " << getName() << " takes " << amount << " damages." << std::endl;
}

void
FragTrap::highFivesGuys(){
	std::cout << "FragTrap: " << getName() << " is asking for an high five!" << std::endl;
}