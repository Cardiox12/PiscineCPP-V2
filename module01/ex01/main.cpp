#include "Zombie.hpp"

# define N 5

int		main(void)
{
	Zombie *horde = zombieHorde( N, "Echo" );

	for ( int index = 0 ; index < N ; index++ ){
		horde[index].announce();
	}

	delete[] horde;
	return (0);
}
