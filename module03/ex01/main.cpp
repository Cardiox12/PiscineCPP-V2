#include "ClapTrap.hpp"

int     main(void) {
    ClapTrap alpha("Alpha");
    ClapTrap beta("Beta");
    ClapTrap alpha_copy = alpha;
    ClapTrap beta_copy(beta);

    alpha.attack("Beta");
    alpha.takeDamage(5);
    alpha.beRepaired(5);

    beta.attack("Alpha");
    beta.takeDamage(5);
    beta.beRepaired(10);

    alpha_copy.attack("Beta-Copy");
    alpha_copy.takeDamage(5);
    alpha_copy.beRepaired(10);

    beta_copy.attack("Alpha-Copy");
    beta_copy.takeDamage(5);
    beta_copy.beRepaired(10);
    return (0);
}