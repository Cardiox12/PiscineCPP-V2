#include "Zombie.hpp"

Zombie::Zombie( ) : m_name( "" ) {
	std::cout << "Arghhh, I'm deadly alive" << std::endl;
}

Zombie::Zombie( std::string name ) : m_name( name ) {
	std::cout << "Arghhh, " << m_name  << " is deadly alive" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Arghhh, " << m_name << " is dying ..." << std::endl;
}

void Zombie::announce( void ) const {
	std::cout << m_name << " BrainnzzzzzZ..." << std::endl;
}

void Zombie::setName( std::string newName ){
	m_name = newName;
}
