#include "Span.hpp"

Span::Span( unsigned int n ) : m_max_size( n ), m_items() {
	srand(std::time(NULL));
}

Span::Span(const Span &src) {
	m_max_size = src.m_max_size;
	m_items = src.m_items;
}

Span::~Span() {};

Span&
Span::operator=(const Span &src) {
	if (this == &src)
		return *this;
	m_max_size = src.m_max_size;
	m_items = src.m_items;
	return (*this);
}

void
Span::addNumber( int x ) {
	if ( m_items.size() == m_max_size ){
		throw IndexExceededException();
	}
	m_items.push_back( x );
}

int
Span::shortestSpan() {
	std::size_t size = m_items.size();

	if ( size == 0 || size == 1 ){
		throw SpanNotFoundException();
	}


	std::sort(m_items.begin(), m_items.end());
	
	int shortest = m_items[1] - m_items[0];

	for ( std::size_t index = 1 ; index < size ; index++ ){
		shortest = std::min(shortest, m_items[index] - m_items[index - 1]);
	}
	return shortest;
}

int
Span::longestSpan() {
	std::size_t size = m_items.size();

	if ( size == 0 || size == 1 ){
		throw SpanNotFoundException();
	}
	int max = *std::max_element(m_items.begin(), m_items.end());
	int min = *std::min_element(m_items.begin(), m_items.end());
	return max - min;
}

void
Span::fill(int min, int max) {
	m_items.resize(m_max_size);

	for ( std::vector<int>::iterator it = m_items.begin() ; it != m_items.end() ; ++it ){
		*it = min + rand() % max;
	}
}

const char*
Span::IndexExceededException::what() const throw() {
	return "Index exceeded";
}

const char*
Span::SpanNotFoundException::what() const throw() {
	return "Span not found";
}