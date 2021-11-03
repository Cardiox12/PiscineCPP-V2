#include "Cat.hpp"

Cat::Cat() : Animal(), m_brain( new Brain() ) {
	m_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal() {
	std::cout << "Cat copy constructor" << std::endl;
	m_type = other.m_type;

	// Deep Copy
	if ( other.m_brain ){
		m_brain = new Brain(*other.m_brain);
	} else {
		m_brain = new Brain();
	}
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
	delete m_brain;
}

Cat&
Cat::operator=(const Cat &other) {
	std::cout << "Cat assignation" << std::endl;

	if ( this == &other ){
		return *this;
	}
	m_type = other.m_type;

	// Deep Copy
	delete m_brain;
	if ( other.m_brain ){
		m_brain = new Brain(*other.m_brain);
	} else {
		m_brain = new Brain();
	}

	return *this;
}

void 
Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}