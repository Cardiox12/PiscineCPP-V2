#include "Dog.hpp"

Dog::Dog() : m_brain( new Brain() ) {
	type = "Dog";
}

Dog::Dog(const Dog &src) {
	type = src.getType();
	m_brain = new Brain(*src.m_brain);
}

Dog::~Dog() {
	delete m_brain;
}

Dog&
Dog::operator=(const Dog &src) {
	if (this == &src)
		return *this;
	type = src.getType();
	delete m_brain;
	m_brain = new Brain(*src.m_brain);
	return (*this);
}

void
Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl;
}