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
}

int
Span::longestSpan() {
	std::size_t size = m_items.size();

	if ( size == 0 || size == 1 ){
		throw SpanNotFoundException();
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