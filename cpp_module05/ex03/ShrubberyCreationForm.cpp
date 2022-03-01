#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	;
}

const std::string & ShrubberyCreationForm::getTarget() const
{
	return _target;
}

const ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & scf)
{
	_target = scf.getTarget();
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & scf) : Form(scf.getName(), scf.getGTS(), scf.getGTE())
{
	*this = scf;
	return ;
}

void	ShrubberyCreationForm::execute(const Bureaucrat & br)
{
	try
	{
		if (br.getGrade() > getGTE() || getIS() == false)
			throw(GradeToLowException());
		else
		{
			std::string 	str;

			str.append(_target);
			str += "_shrubbery";

			std::ofstream	ofs(str);
			

			ofs <<"       %%%,%%%%%%%" << std::endl
				<<"		,'%% \\-*%%%%%%%" << std::endl
				<<"	;%%%%%*%   _%%%%\"" << std::endl
				<<"	,%%%       ( (_.*%%%%." << std::endl
				<<"	% *%%, ,%%%%*(    '" << std::endl
				<<"	%^     ,*%%% )( |,%%*%,_" << std::endl
				<<"		*%   ) / #).-\"*%%*" << std::endl
				<<"			_.) ,/ *%," << std::endl
				<<"	_________/)#(_____________ " << std::endl
				<< std::endl;
			
			ofs.close();
		}
	}
	catch(GradeToLowException e)
	{
		std::cerr << e.what() << std::endl;
		std::exit(1);
	}	
}