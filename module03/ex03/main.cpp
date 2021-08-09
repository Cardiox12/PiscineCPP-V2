#include "DiamondTrap.hpp"

int		main(void){
	DiamondTrap diamond("Tony");

	diamond.attack("Eithan");
	diamond.beRepaired(10);
	diamond.takeDamage(20);

	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	return (0);
}