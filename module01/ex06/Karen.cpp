#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen() {}

void
Karen::print_log( LogDict karen_quote ) {
	std::cout << "[ " << karen_quote.log_level << " ]" << std::endl;
	std::cout << karen_quote.quote << std::endl << std::endl;
}

int
Karen::find_log_level( std::string log_level ) {
	for ( int index = 0 ; index < KAREN_QUOTES_SIZE ; index++ ){
		if ( KAREN_QUOTES[ index ].log_level == log_level ){
			return ( index );
		}
	}
	return (-1);
}

void
Karen::filter( std::string log_level ) {
	int pos = this->find_log_level( log_level );

	switch ( pos ){
		case -1:
			this->print_log( DEFAULT_QUOTE );
			break;
		case 0:
			this->print_log( KAREN_QUOTES[pos++] );
		case 1:
			this->print_log( KAREN_QUOTES[pos++] );
		case 2:
			this->print_log( KAREN_QUOTES[pos++] );
		case 3:
			this->print_log( KAREN_QUOTES[pos++] );
	}
}
