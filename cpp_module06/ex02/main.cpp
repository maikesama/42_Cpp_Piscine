#include "Base.hpp"

int main()
{
    Base *x;

    x = generate();

    identify(x);

    identify(*x);

    delete x;

    return 0;

}

