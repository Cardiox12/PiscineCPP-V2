#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {
	if ( N < 0 ){
		return ( NULL );
	}
	Zombie *zombieHorde = new Zombie[N]();

	for ( int index = 0 ; index < N ; index++ ){
		zombieHorde[index].setName( name );
	}
	return ( zombieHorde );
}
