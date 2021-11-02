#include "Cat.hpp"

Cat::Cat() : m_brain( new Brain() ) {
	type = "Cat";
}

Cat::Cat(const Cat &src) {
	type = src.getType();
	m_brain = new Brain(*src.m_brain);
}

Cat::~Cat() {
	delete m_brain;
}

Cat&
Cat::operator=(const Cat &src) {
	if (this == &src)
		return *this;
	type = src.getType();
	delete m_brain;
	m_brain = new Brain(*src.m_brain);
	return (*this);
}

void
Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}