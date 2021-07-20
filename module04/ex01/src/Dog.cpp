#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ), m_brain( new Brain() ) {
	std::cout << "Init Dog" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Copy Dog" << std::endl;
	m_brain = new Brain(*src.m_brain);
}

Dog::~Dog() {
	std::cout << getType() << ": destructor" << std::endl;
	delete m_brain;
}

Dog&
Dog::operator=(const Dog &src) {
	std::cout << "Assigning Dog" << std::endl;
	if (this == &src)
		return *this;
	Animal::operator=(src);
	delete m_brain;
	m_brain = new Brain(*src.m_brain);
	return (*this);
}

void
Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl;
}