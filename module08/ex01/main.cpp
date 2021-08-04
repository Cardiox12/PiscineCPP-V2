#include <iostream>
#include "Span.hpp"

void	test_static_span(){
	Span sp(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Static Span test" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test_filled_span(){
	Span sp(10000);

	sp.fill(10, 100000);
	std::cout << "Filled Span test" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int	main(void){
	test_static_span();
	test_filled_span();
	return (0);
}