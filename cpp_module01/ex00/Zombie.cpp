#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{

    return ;
}

Zombie::~Zombie(void)
{
    std::cout << Zombie::_name << " has been destroyed" << std::endl;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// std::string Zombie::getName(Zombie *Zombie) const
// {
//     return Zombie::_name;
// }
