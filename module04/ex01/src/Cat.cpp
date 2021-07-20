#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ), m_brain( new Brain() ) {
	std::cout << "Init Cat" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Copy Cat" << std::endl;
	m_brain = new Brain(*src.m_brain);
}

Cat::~Cat() {
	std::cout << getType() << ": destructor" << std::endl;
	delete m_brain;
}

Cat&
Cat::operator=(const Cat &src) {
	std::cout << "Assigning Cat" << std::endl;
	if (this == &src)
		return *this;
	Animal::operator=(src);
	delete m_brain;
	m_brain = new Brain(*src.m_brain);
	return (*this);
}

void
Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}