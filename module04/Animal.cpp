#include "Animal.hpp"

Animal::Animal() : m_type("") {}

Animal::Animal(const Animal &src) {
	m_type = src.m_type;
}

Animal::~Animal() {};

Animal&
Animal::operator=(const Animal &src) {
    if (this == &src)
		return *this;
	m_type = src.m_type;
    return (*this);
}

void
Animal::makeSound() const {
	
}

const std::string&
Animal::getType() const {
	return m_type;
}