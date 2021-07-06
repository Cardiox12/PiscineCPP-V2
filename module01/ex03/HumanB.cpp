#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : m_name( name ), m_weapon( NULL ) {}

HumanB::~HumanB() {}

void
HumanB::setWeapon( Weapon *newWeapon ) {
	m_weapon = newWeapon;
}

void
HumanB::attack() const {
	std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;	
}
