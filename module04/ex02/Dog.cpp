#include "Dog.hpp"

Dog::Dog() : Animal(), m_brain( new Brain() ) {
    m_type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal() {
    std::cout << "Dog copy constructor" << std::endl;
    m_type = other.m_type;

    // Deep Copy
    if ( other.m_brain ){
        m_brain = new Brain(*other.m_brain);
    } else {
        m_brain = new Brain();
    }
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
    delete m_brain;
}

Dog&
Dog::operator=(const Dog &other) {
    std::cout << "Dog assignation" << std::endl;

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
Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}