#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void){
	ClapTrap alpha("Alpha");
	ScavTrap beta("Beta");
	ScavTrap beta_assignation = beta;
	ScavTrap beta_copy(beta);

	beta_assignation = beta;

	alpha.attack("Beta");
	beta.attack("Alpha");

	beta_copy.beRepaired(5);
	beta_assignation.takeDamage(5);

	beta.guardGate();
	beta_copy.guardGate();
	beta_assignation.guardGate();
	return (0);
}
