#include "Animal.hpp"

Animal::Animal() : type( "" ), name( "" ), age( 0 ) {}

Animal::Animal( std::string _type, std::string _name, int _age ) : 
	type( _type ), name( _name ), age( _age ) {}

Animal::Animal(const Animal &src) {
	this->type = src.type;
	this->name = src.name;
	this->age = src.age;
}

Animal::~Animal() {};

Animal&
Animal::operator=(const Animal &src) {
    if (this == &src)
		return *this;
	this->type = src.type;
	this->name = src.name;
	this->age = src.age;
    return (*this);
}

const std::string&
Animal::getType() const {
	return this->type;
}

void
Animal::makeSound() const {}
