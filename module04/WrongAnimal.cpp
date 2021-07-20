#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type( "" ) {}
WrongAnimal::WrongAnimal( std::string _type ) : type( _type ) {}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	this->type = src.type;
}

WrongAnimal::~WrongAnimal() {};

WrongAnimal&
WrongAnimal::operator=(const WrongAnimal &src) {
	if (this == &src)
		return *this;
	this->type = src.type;
	return (*this);
}

const std::string&
WrongAnimal::getType() const {
	return this->type;
}

void
WrongAnimal::makeSound() const {
	std::cout << "Inaudible WrongAnimal sound ..... bzzzt" << std::endl;
}