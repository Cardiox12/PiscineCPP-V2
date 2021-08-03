#include <iostream>
#include "Span.hpp"


int	main(void){
	Span span(5);

	for ( int n = 0 ; n < 5 ; n++ ){
		span.addNumber( n );
	}
	return (0);
}