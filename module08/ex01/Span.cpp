#include "Span.hpp"

Span::Span( unsigned int n ) : m_max_size( n ), m_items() {}

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

	int shortest;

	for ( size_t i = 0 ; i < size ; i++ ){
		for ( size_t j = 0 ; j < size ; j++ ){
			if ( i != j ){
				shortest = std::min(shortest, std::abs( m_items[j] - m_items[i] ));
			}
		}
	}
	return shortest;
}

int
Span::longestSpan() {
	std::size_t size = m_items.size();

	if ( size == 0 || size == 1 ){
		throw SpanNotFoundException();
	}

	int longest;

	for ( size_t i = 0 ; i < size ; i++ ){
		for ( size_t j = 0 ; j < size ; j++ ){
			if ( i != j ){
				longest = std::max(longest, std::abs( m_items[j] - m_items[i] ));
			}
		}
	}
	return longest;
}

void
Span::fill(int min, int max) {
	srand(std::time(NULL));

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