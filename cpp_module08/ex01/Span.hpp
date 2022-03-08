#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public :
        Span(unsigned int N) : _howmany(0), _max(N) {};
        ~Span() {};
        const Span & operator=(const Span & s);
        Span(const Span & s);

        void    addNumber(int n);
        void    addNumber(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);

        int     shortestSpan();
        int     longestSpan() const;

        const std::vector<int> &  getVector() const { return v1; };      

    private :
        Span();
        
        unsigned int _howmany;
        unsigned int _max;
        std::vector<int> v1;

};



#endif