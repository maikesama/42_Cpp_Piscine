#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public :
        Span(unsigned int N) : _max(N), _howmany(0) {};
        ~Span() {};
        const Span & operator=(const Span & s);
        Span(const Span & s);

        void    addNumber(int n);

        int     shortestSpan() const;
        int     longestSpan() const;

    private :
        Span();
        
        unsigned int _howmany;
        unsigned int _max;
        std::vector<int> v1;

};



#endif