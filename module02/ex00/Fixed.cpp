#include "Fixed.hpp"

const int Fixed::fract_part = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	m_raw_bits = 0;
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
	if ( &src == this ){
		return (*this);
	}
	m_raw_bits = src.m_raw_bits;
    return (*this);
}

int
Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return m_raw_bits;
}

void
Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	m_raw_bits = raw;
}
