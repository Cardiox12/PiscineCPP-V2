#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie *zombie = new Zombie( name );

	if ( zombie != NULL ){
		zombie->announce();
	}
	delete zombie;
}
