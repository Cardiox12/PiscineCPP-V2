#include "Animal.hpp"

Animal::Animal() : m_type("Animal") { 
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructor" << std::endl;
    m_type = other.m_type;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal&
Animal::operator=(const Animal &other) {
    std::cout << "Animal assignation operator" << std::endl;
    if ( this == &other )
        return *this;
    m_type = other.m_type;
    return *this;
}

void
Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

const std::string&
Animal::getType() const {
    return m_type;
}