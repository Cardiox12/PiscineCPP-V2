#include "Fixed.hpp"
#include <iostream>

const int Fixed::fract_part = 8;

Fixed::Fixed(int const n){
	std::cout << "Int constructor called" << std::endl;
	m_raw_bits = n << Fixed::fract_part;
}

Fixed::Fixed(float const n){
	std::cout << "Float constructor called" << std::endl;
	m_raw_bits = (roundf(n * (1 << Fixed::fract_part)));
}

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&
Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;
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

