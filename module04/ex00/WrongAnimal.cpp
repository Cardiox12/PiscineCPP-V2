#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("Animal") {
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    m_type = other.m_type;
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal&
WrongAnimal::operator=(const WrongAnimal &other) {
    if ( &other == this ){
        return *this;
    }
    m_type = other.m_type;
    std::cout << "WrongAnimal assignation operator" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

void 
WrongAnimal::makeSound() const {
    std::cout << "WrongAnimmal sound" << std::endl;
}

const std::string&
WrongAnimal::getType() const {
    return m_type;
}
