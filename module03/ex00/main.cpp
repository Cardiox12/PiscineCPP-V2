#include "ClapTrap.hpp"

int		main(void){
	ClapTrap alpha("Alpha");

	alpha.attack("Beta");
	alpha.beRepaired(10);
	alpha.takeDamage(20);

	ClapTrap beta("Beta");
	ClapTrap gamma(beta);
	beta = alpha;
	return (0);
}
