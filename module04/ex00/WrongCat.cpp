#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    m_type = "WrongCat";
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
    m_type = other.m_type;
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat&
WrongCat::operator=(const WrongCat &other) {
    if ( &other == this ){
        return *this;
    }
    m_type = other.m_type;
    std::cout << "WrongCat assignation operator" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

void 
WrongCat::makeSound() const {
    std::cout << "Wrong Meow Meow" << std::endl;
}

const std::string&
WrongCat::getType() const {
    return m_type;
}
