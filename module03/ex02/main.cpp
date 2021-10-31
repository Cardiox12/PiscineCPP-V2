#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void){
	ClapTrap alpha("Alpha");
	ScavTrap beta("Beta");
	FragTrap gamma("Gamma");
	FragTrap gamma_assignation("Gamma Assign");
	
	gamma_assignation = gamma;
	gamma.attack("Alpha");
	gamma_assignation.attack("Beta");

	gamma.highFivesGuys();
	return (0);
}
