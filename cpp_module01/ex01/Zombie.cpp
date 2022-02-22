#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << _name << " has been destroyed" << std::endl;
    return ;
}

void    Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name )
{
    _name = name;
    return ;
}