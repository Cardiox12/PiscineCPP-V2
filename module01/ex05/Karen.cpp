#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen() {}

void
Karen::print_log( LogDict karen_quote ) {
	std::cout << "[ " << karen_quote.log_level << " ]" << std::endl;
	std::cout << karen_quote.quote << std::endl;		
}

int
Karen::find_log_level( std::string log_level ) {
	int index = 0;

	for ( ; index < KAREN_QUOTES_SIZE ; index++ ){
		if ( KAREN_QUOTES[ index ].log_level == log_level ){
			return ( index );
		}
	}
	return (-1);
}

void
Karen::filter( std::string log_level ) {
	int pos = this->find_log_level( log_level );

	if ( pos < 0 )
	{
		this->print_log( DEFAULT_QUOTE );
	} else {
		for ( int index = pos ; index < KAREN_QUOTES_SIZE ; index++ ){
			this->print_log( KAREN_QUOTES[index] );
			if ( index + 1 != pos && index + 1 != KAREN_QUOTES_SIZE ){
				std::cout << std::endl;
			}
		}
	}
}
