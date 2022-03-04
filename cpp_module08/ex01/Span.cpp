#include "Span.hpp"

const Span & Span::operator=(const Span & s)
{
    _max = s._max;
    _howmany = s._howmany;
    v1.erase(v1.begin(), v1.end());
    std::copy(s.v1.begin(), s.v1.end(), v1.begin());
    
    return *this;
}

Span::Span(const Span & s)
{
    *this = s;
    return ;
}

void    Span::addNumber(int n)
{
    if (how)
    v1.push_back(n);
}



