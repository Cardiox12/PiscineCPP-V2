#include "Cat.hpp"

Cat::Cat() : Animal( "Cat", "", 0 ) 
{
	std::cout << "Default " << getType() << " constructor." << std::endl;
}

Cat::Cat( std::string _name, int _age ) : Animal( "Cat", _name, _age ) 
{
	std::cout << "Non default " << getType() << " constructor." << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) 
{
	std::cout << "Copy " << getType() << " constructor." << std::endl;
}

Cat::~Cat() 
{
	std::cout << getType() << " destructor." << std::endl;
}

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