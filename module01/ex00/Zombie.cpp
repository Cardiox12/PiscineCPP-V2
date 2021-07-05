#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : m_name( name ) {
	std::cout << "Arghhh, " << m_name  << " is deadly alive" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Arghhh, " << m_name << " is dying ..." << std::endl;
}

void Zombie::announce( void ) const {
	std::cout << m_name << " BrainnzzzzzZ..." << std::endl;
}
