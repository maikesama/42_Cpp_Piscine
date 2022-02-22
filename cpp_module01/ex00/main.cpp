#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombie = newZombie("Grimmjow");
    Zombie->announce();
    randomChump("Ulquiorra");
    delete Zombie;
    return (0);
}