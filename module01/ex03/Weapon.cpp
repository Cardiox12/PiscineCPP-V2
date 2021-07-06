#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : m_type( type ) {}

Weapon::~Weapon() {}

std::string const
&Weapon::getType() const {
	return ( m_type );
}

void
Weapon::setType( std::string newType ) {
	m_type = newType;
}
