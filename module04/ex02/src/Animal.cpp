#include "Animal.hpp"

Animal::~Animal() {};

const std::string&
Animal::getType() const {
	return this->m_type;
}