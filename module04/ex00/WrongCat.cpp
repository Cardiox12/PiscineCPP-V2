#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "WrongCat" ) {}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal( src ) {}

WrongCat::~WrongCat() {};

WrongCat&
WrongCat::operator=(const WrongCat &src) {
	if (this == &src)
		return *this;
	WrongAnimal::operator=(src);
	return (*this);
}

void
WrongCat::makeSound() const {
	std::cout << "WrongCat Meow Meow" << std::endl;
}
