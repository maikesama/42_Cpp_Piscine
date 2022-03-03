#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T>
class	Array
{
	public :
	Array()
	{
		_a = NULL;
		_size = 0;
	};

	Array( unsigned int n)
	{
		_a = new T[n];
		_size = n;
		for (unsigned int i = 0; i < n; i++)
			_a[i] = 0;
	};

	~Array()
	{
		delete [] _a;
	};

	const Array & operator=(const Array & a)
	{
		delete [] _a;
		_a = new T[a._size];
		_size = a._size;
		for (unsigned int i = 0; i < _size; i++)
		{
			_a[i] = a._a[i];
		}
		return *this;
	};

	Array<T>(const Array<T> & a)
	{
		_a = NULL;
		*this = a;
		return ;
	};

	unsigned int	size() const{
		return _size;
	}

	T & operator[](unsigned int i)
	{
		if (i > _size)
			throw (std::exception());
		return (_a[i]);
	}

	private :
		T*				_a;
		unsigned int	_size;

};

#endif