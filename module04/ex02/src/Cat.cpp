#include "Cat.hpp"

Cat::Cat() : m_brain( new Brain() ) {
	m_type = "Cat";
	std::cout << "Init Cat" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Copy Cat" << std::endl;
	m_type = src.m_type;
	m_brain = new Brain(*src.m_brain);
	*m_brain = *src.m_brain;
}

Cat::~Cat() {
	std::cout << getType() << " destructor" << std::endl;
	delete m_brain;
}

Cat&
Cat::operator=(const Cat &src) {
	std::cout << "Assigning Cat" << std::endl;
	if (this == &src)
		return *this;
	Animal::operator=(src);
	Brain *tmp = m_brain;
	m_brain = new Brain(*src.m_brain);
	*m_brain = *tmp;
	delete tmp;
	return (*this);
}

void
Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}