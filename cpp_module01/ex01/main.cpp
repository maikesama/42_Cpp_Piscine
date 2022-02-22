#include "Zombie.hpp"

int main( void )
{
    Zombie* Horde = zombieHorde(42, "Aizen");
    int i = 0;
    while (i < 42)
    {
        Horde[i].announce();
        i++;
    }
    delete [] Horde;
    return (0);
}