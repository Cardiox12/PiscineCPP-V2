#include "Dog.hpp"

Dog::Dog() : Animal( "Dog", "", 0 ) {
	std::cout << "Default " << getType() << " constructor." << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Non default " << getType() << " constructor." << std::endl;
}

Dog::~Dog() {
	std::cout << getType() << " destructor." << std::endl;
}

Dog&
Dog::operator=(const Dog &src) {
	if (this == &src)
		return *this;
	Animal::operator=(src);
	return (*this);
}

void
Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl;
}