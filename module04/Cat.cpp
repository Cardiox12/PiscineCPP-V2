#include "Cat.hpp"

Cat::Cat() : Animal( "Cat", "", 0 ) {}

Cat::Cat( std::string _name, int _age ) : Animal( "Cat", _name, _age ) {}

Cat::Cat(const Cat &src) : Animal(src) {}

Cat::~Cat() {};

Cat&
Cat::operator=(const Cat &src) {
	if (this == &src)
		return *this;
	Animal::operator=(src);
	return (*this);
}

void
Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}