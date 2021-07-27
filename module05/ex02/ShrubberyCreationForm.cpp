#include "ShrubberyCreationForm.hpp"

static const char *g_tree[10] = {
	"              ,@@@@@@@,                 ",
	"      ,,,.   ,@@@@@@/@@,  .oo8888o.     ",
	"   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    ",
	"  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   ",
	"  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   ",
	"  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    ",
	"  `&%\\ ` /%&'    |.|        \\ '|8'      ",
	"      |o|        | |         | |        ",
	"      |.|        | |         | |        ",
	"   \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_"
};

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ) 
	: Form("ShrubberyCreationForm", 145, 137), m_target( target ) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) 
	: Form( src ) 
{
	m_target = src.m_target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    if (this == &src)
		return (*this);
	Form::operator=(src);
	m_target = src.m_target;
    return (*this);
}

void 
ShrubberyCreationForm::execute( const Bureaucrat &executor ) const {
	try {
		isExecutable( executor );
	} catch ( std::exception &e ){
		throw;
	}

	if ( this->getSigned() ){
		std::string filename = m_target + "_shrubbery";
		std::ofstream outfile( filename.c_str(), std::ios::app );

		for ( int index = 0; index < 10 ; index++ ){
			outfile << g_tree[index] << std::endl;
		}
	}
}