#include "FragTrap.hpp"


int main()
{
    ClapTrap Trap("Ichigo");
    ScavTrap Scav("Aizen");
    FragTrap Frag("Grimmjow");

    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Frag.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Frag.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Frag.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Frag.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Frag.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Frag.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);

    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);
    Scav.takeDamage(20);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);
    Scav.takeDamage(20);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);
    Scav.takeDamage(20);
    Trap.attack("Aizen");
    Scav.takeDamage(20);
    Scav.beRepaired(1);

    return 0;
}