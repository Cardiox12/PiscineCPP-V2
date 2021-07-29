#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <ctype.h>
#include <float.h>
#include <math.h>

typedef void (*convert_fn)(double);

bool is_round(float n){
	return ( ( n - static_cast<int>( n ) ) == 0.0f );
}

bool is_char(const std::string &s){
	return s.size() == 1 && isprint(s[0]) && !isdigit(s[0]);
}

void	char_convert( double d ){
	
	std::cout << "char: ";
	if ( d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max() ){
		char c = static_cast<char>( d );

		if ( isprint(c) ){
			std::cout << c << std::endl;
		} else {
			std::cout << "non displayable" << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void	int_convert( double d ){

	std::cout << "int: ";
	if ( d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max() ){
		int i = static_cast<int>( d );
		std::cout << i << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void	float_convert( double d ){
	std::cout << "float: ";

	if ( ( d >= -FLT_MAX && d <= FLT_MAX ) || isnanl(d) || isinff(d) ){
		float f = static_cast<float>( d );

		if ( is_round(f) ){
			std::cout << f << ".0f" << std::endl;
		} else {
			std::cout << f << "f" << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void	double_convert( double d ){
	std::cout << "double: ";

	if ( is_round( d ) ){
		std::cout << d << ".0" << std::endl;
	} else {
		std::cout << d << std::endl;
	}
}

void	convert( const char *s ){
	double				d;
	static convert_fn	cadbacks[4] = { 
		char_convert, 
		int_convert, 
		float_convert,
		double_convert
	};
	if ( is_char( s ) ){
		d = static_cast<double>( s[0] );
	} else {
		d = std::atof( s );
	}

	for ( int index = 0 ; index < 4 ; index++ ){
		cadbacks[index]( d );
	}
}

int		main(int argc, char *argv[]){
	if ( argc == 2 ){
		convert( argv[1] );
	}
	return (0);
}
