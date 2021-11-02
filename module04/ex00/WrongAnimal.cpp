#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type( "" ) {
	std::cout << "Default " << getType() << " constructor." << std::endl;
}

WrongAnimal::WrongAnimal( std::string _type ) : type( _type ) 
{
	std::cout << "Non default" << getType() << " constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "Copy " << getType() << " constructor." << std::endl;
	this->type = src.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << getType() << " destructor." << std::endl;
}

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