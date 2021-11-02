#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "WrongCat" ) 
{
	std::cout << "Default " << getType() << " constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal( src ) {
	std::cout << "Non default " << getType() << " constructor." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << getType() << " destructor." << std::endl;
}

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
