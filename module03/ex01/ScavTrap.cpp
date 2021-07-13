#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap( other ) {}

ScavTrap::~ScavTrap()
{
}

ScavTrap&
ScavTrap::operator=( ScavTrap const & other )
{
	if ( this != &other )
		*this = other;
	return *this;
}