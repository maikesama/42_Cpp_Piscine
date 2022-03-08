#include "Span.hpp"

const Span & Span::operator=(const Span & s)
{
    _max = s._max;
    _howmany = s._howmany;
    v1.erase(v1.begin(), v1.end());
    v1 = s.v1;
    
    return *this;
}

Span::Span(const Span & s)
{
    *this = s;
    return ;
}

void    Span::addNumber(int n)
{
    if (_howmany <= _max)
    {
        v1.push_back(n);
        _howmany++;
    }
    else
        throw(std::exception());
}

void    Span::addNumber(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end)
{
    if (start > end) throw std::logic_error("Bad iterators");
    for (std::vector<int>::const_iterator i = start; i < end; i++)
        this->addNumber(*i);
}

int     Span::longestSpan() const
{
    if (_howmany < 2)
        throw (std::exception());
    else
    {
        return ((*std::max_element(v1.begin(), v1.end())) - (*std::min_element(v1.begin(), v1.end())));
    }
}

int     Span::shortestSpan()
{
    std::vector<int> v2;
    unsigned long int it;
    long int i = 2147483647;

    if (_howmany < 2)
        throw (std::exception());
    else
    {
        v2 = v1;
        std::sort(v2.begin(), v2.end());

        for (it = 0; it < v2.size() - 1; it++)
        {
            if (i > v2[it + 1] - v2[it])
                i = v2[it + 1] - v2[it];
        }
        return (i);
    }


}



