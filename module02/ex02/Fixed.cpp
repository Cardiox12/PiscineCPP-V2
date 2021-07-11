#include "Fixed.hpp"
#include <iostream>

const int Fixed::fract_part = 8;

Fixed::Fixed(int const n){
	m_raw_bits = n << Fixed::fract_part;
}

Fixed::Fixed(float const n){
	m_raw_bits = (roundf(n * (1 << Fixed::fract_part)));
}

Fixed::Fixed() { }

Fixed::~Fixed() { }

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed&
Fixed::operator=(const Fixed &src) {
	if (this == &src)
		*this = src;
	m_raw_bits = src.getRawBits();
	return (*this);
}

void
Fixed::setRawBits(int const raw){
	m_raw_bits = raw;
}

int
Fixed::getRawBits(void) const {
	return (m_raw_bits);
}

float
Fixed::toFloat(void) const {
	return ( (float)m_raw_bits / (float)( 1 << Fixed::fract_part ) );
}

int
Fixed::toInt(void) const {
	return ( m_raw_bits >> Fixed::fract_part );
}

std::ostream&
operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}

bool 
Fixed::operator<(const Fixed &b){
	return (this->getRawBits() < b.getRawBits());
}

bool 
Fixed::operator>(const Fixed &b){
	return (this->getRawBits() > b.getRawBits());
}

bool 
Fixed::operator>=(const Fixed &b){
	return (this->getRawBits() >= b.getRawBits());
}

bool 
Fixed::operator<=(const Fixed &b){
	return (this->getRawBits() <= b.getRawBits());
}

bool 
Fixed::operator!=(const Fixed &b){
	return (this->getRawBits() != b.getRawBits());
}

bool 
Fixed::operator==(const Fixed &b){
	return (this->getRawBits() == b.getRawBits());
}

Fixed 
Fixed::operator*(const Fixed &b){
	int result = (m_raw_bits * b.getRawBits() >> Fixed::fract_part);

	return (result);
}

Fixed 
Fixed::operator/(const Fixed &b){
	int result = ((m_raw_bits * (1 << Fixed::fract_part)) / b.getRawBits());

	return (result);
}

Fixed 
Fixed::operator-(const Fixed &b){
	return (this->getRawBits() - b.getRawBits());
}

Fixed 
Fixed::operator+(const Fixed &b){
	return (this->getRawBits() + b.getRawBits());
}

Fixed
Fixed::operator++(){
	m_raw_bits++;
	return *this;
}

Fixed
Fixed::operator++(int n){
	(void)n;
	Fixed old( *this );

	operator++();
	return old;
}

Fixed
Fixed::operator--(){
	m_raw_bits--;
	return *this;
}

Fixed
Fixed::operator--(int n){
	(void)n;
	Fixed old( *this );

	operator--();
	return old;
}

Fixed&
Fixed::min(Fixed &a, Fixed &b){
	return ((a < b) ? a : b);
}

const Fixed&
Fixed::min(const Fixed &a, const Fixed &b){
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed&
Fixed::max(Fixed &a, Fixed &b){
	return ((a > b) ? a : b);
}

const Fixed&
Fixed::max(const Fixed &a, const Fixed &b){
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

