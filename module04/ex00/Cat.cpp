#include "Cat.hpp"

Cat::Cat() : Animal() {
    m_type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal() {
    m_type = other.m_type;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat&
Cat::operator=(const Cat &other) {
    std::cout << "Cat assignation" << std::endl;

    if ( this == &other ){
        return *this;
    }
    m_type = other.m_type;
    return *this;
}

void 
Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}