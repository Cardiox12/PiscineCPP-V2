#include "Dog.hpp"

Dog::Dog() : Animal() {
    m_type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal() {
    m_type = other.m_type;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog&
Dog::operator=(const Dog &other) {
    std::cout << "Dog assignation" << std::endl;

    if ( this == &other ){
        return *this;
    }
    m_type = other.m_type;
    return *this;
}

void 
Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}