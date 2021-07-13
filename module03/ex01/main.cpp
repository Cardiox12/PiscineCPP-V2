#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void) {
    ClapTrap alpha("Alpha");
	ScavTrap sigma("Sigma");
	ScavTrap beta = sigma;
	ScavTrap phi(beta);

	sigma.attack("Beta");
	sigma.takeDamage(5);
	sigma.beRepaired(10);

    alpha.attack("Beta");
    alpha.takeDamage(5);
    alpha.beRepaired(5);

	beta.guardGate();
    return (0);
}
