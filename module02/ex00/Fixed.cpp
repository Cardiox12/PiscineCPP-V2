#include "Fixed.hpp"
#include <iostream>

const int Fixed::fract_part = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
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
	setRawBits(src.getRawBits());
    return (*this);
}

void
Fixed::setRawBits(int const raw){
	m_raw_bits = raw;
}

int
Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (m_raw_bits);
}
