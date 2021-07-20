#include "Animal.hpp"

Animal::Animal() : type( "" ) {}

Animal::Animal( std::string _type ) : type( _type ) {}

Animal::Animal(const Animal &src) {
	this->type = src.type;
}

Animal::~Animal() {
	std::cout << "Animal: destructor" << std::endl;
};

Animal&
Animal::operator=(const Animal &src) {
    if (this == &src)
		return *this;
	this->type = src.type;
    return (*this);
}

const std::string&
Animal::getType() const {
	return this->type;
}

void
Animal::makeSound() const {}
