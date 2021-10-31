#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) :
	ClapTrap( name + "_clap_trap" ),
	ScavTrap( name + "_scav_trap" ),
	FragTrap( name + "_frag_trap" ),
	m_name(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : 
	ClapTrap(src),
	ScavTrap(src),
	FragTrap(src)
{

}

DiamondTrap::~DiamondTrap() {};

DiamondTrap&
DiamondTrap::operator=(const DiamondTrap &src) {
    if (this == &src){
        return *this;
	}
	ClapTrap::operator=(src);
    return (*this);
}

void
DiamondTrap::attack( std::string const &target ){
	ScavTrap::attack( target );
}

void
DiamondTrap::whoAmI(){
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Clap Name: " << getName() << std::endl;
}

void
DiamondTrap::beRepaired( unsigned int amount ){
	ClapTrap::beRepaired( amount );
}

void
DiamondTrap::takeDamage( unsigned int amount ){
	ClapTrap::takeDamage( amount );
}