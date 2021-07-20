#include "Dog.hpp"

Dog::Dog() : Animal( "Dog", "", 0 ) {}

Dog::Dog(const Dog &src) : Animal(src) {}

Dog::~Dog() {};

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