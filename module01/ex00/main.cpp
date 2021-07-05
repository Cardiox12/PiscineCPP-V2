#include "Zombie.hpp"

int		main( void )
{
	Zombie beta( "Beta" );
	Zombie *echo = newZombie( "Echo" );

	beta.announce();
	echo->announce();
	randomChump( "Gamma" );

	delete echo;
	return (0);
}
