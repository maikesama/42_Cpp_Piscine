#include "Conversion.hpp"

Conversion::Conversion(std::string base) : _base(base)
{
	return ;
}

Conversion::~Conversion()
{
	return ;
}

const std::string & Conversion::getBase() const
{
	return _base;
}

const Conversion & Conversion::operator=(const Conversion & c)
{
	this->_base = c.getBase();

	return *this;
}

Conversion::Conversion(const Conversion & c)
{
	*this = c;
	return ;
}

bool Conversion::impossible() const
{
	if (isnan(_d) == true || isinf(_d) == true)
		return true;
	if (_d > std::numeric_limits<int>::max() || _d < std::numeric_limits<int>::min())
		return true;
	return false ;
}

void	Conversion::printInt() const
{
	if (impossible() == false)
		std::cout << "int : " << _n << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	return ;
}

void	Conversion::printFloat() const
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float : " << _f << "f" << std::endl;
	return ;
}

void	Conversion::printDouble() const
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "double : " << _d << std::endl;
	return ;
}


int		Conversion::whatType() const
{
	int lengh = _base.length();
	int point = 1;

	if ( lengh == 1 && isprint(_base[0]) && (_base[0] < '0' || _base[0] > '9') )
	{
		return 1;
	}

	if (_base == "+inf" || _base == "-inf" || _base == "nan")
	{
		return 2;
	}
	
	if (_base == "+inff" || _base == "-inff" || _base == "nanf")
	{
		return 3;
	}

	for (int i = 0; i < lengh; i++)
	{
		if (isdigit(_base[i]) == false && _base[i] != '-')
		{
			if (_base[i] == '.' && point == 1) point--;
			else if (i == lengh - 1 && _base[i] == 'f' && (point == 1 || point == 0))
			{
				return 3;
			}
			else break;
		}
		else if (i == lengh - 1 && point == 0)
		{
			return 2;
		}
		else if (lengh < 11 && i == lengh - 1 && point == 1)
		{
			return 4;
		}

	}
	return 5;
}



void	Conversion::convert()
{
	switch(whatType())
	{
		case 1:
			_c = _base[0];
			_n = static_cast<int>(_c);
			_d = static_cast<double>(_n);
			_f = static_cast<float>(_d);
			break ;

		case 2:
			_d = strtod(_base.c_str(), NULL);
			_f = static_cast<float>(_d);
			_n = static_cast<int>(_f);
			_c = static_cast<char>(_n);
			break ;

		case 3:
			_f = static_cast<float>(strtod(_base.c_str(), NULL));
			_d = static_cast<double>(_f);
			_n = static_cast<int>(_f);
			_c = static_cast<char>(_n);
			break ;

		case 4:
			_n = atoi(_base.c_str());
			_c = static_cast<char>(_n);
			_f = static_cast<float>(_n);
			_d = static_cast<double>(_f);
			break;
		
		case 5:
			std::cout << "Bad input" << std::endl;
			return ;
			break;
	}

	printChar();
	printInt();
	printFloat();
	printDouble();
}

void	Conversion::printChar() const
{
	if (isprint(_c) == false)
		std::cout << "char : not displayable" << std::endl;
	else if (impossible() == false)
		std::cout << "char : " << _c << std::endl;
	else
		std::cout << "char : impossible" << std::endl; 
}
