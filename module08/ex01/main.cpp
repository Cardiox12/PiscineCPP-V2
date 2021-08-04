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
	std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest  : " << sp.longestSpan() << std::endl;
}

void	test_filled_span(){
	Span sp(10000);

	sp.fill(1, 1000000);
	std::cout << "Filled Span test" << std::endl;
	std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest  : " << sp.longestSpan() << std::endl;
}

void	test_very_long_filled_span(){
	Span sp(100000);

	sp.fill(1, 1000000);
	std::cout << "Filled Span test" << std::endl;
	std::cout << "Shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest  : " << sp.longestSpan() << std::endl;
}

int	main(void){
	test_static_span();
	test_filled_span();
	test_very_long_filled_span();
	return (0);
}