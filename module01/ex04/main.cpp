#include <iostream>
#include <string>
#include <fstream>

#define FILE_POSTFIX ".replace"

void
replace_all(std::string &source, const std::string &from, const std::string &to) {
	for ( size_t pos = source.find( from ) ; pos != std::string::npos ;  ){
		int end = pos + from.length();

		std::string left = source.substr( 0, pos );
		std::string right = source.substr( end, source.length() - end );
		source = left + to + right;
		pos = source.find( from, pos + 1);
	}
}

void
sed_improved(std::string filename, std::string s1, std::string s2){
	std::string outfilename = filename + std::string(FILE_POSTFIX);
	std::ifstream file( filename.c_str(), std::ifstream::out );
	std::ofstream outfile( outfilename.c_str(), std::ios::app );

	for ( std::string line ; std::getline( file, line ) ; ){
		replace_all( line, s1, s2 );
		outfile << line << std::endl;
	}
}

int
main(int argc, char *argv[])
{
	if ( argc == 4 ){
		sed_improved( argv[1], argv[2], argv[3] );
	}
	return (0);
}
