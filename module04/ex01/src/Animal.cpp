#include "Animal.hpp"

Animal::Animal() : m_type( "" ), m_name( "" ), m_age( 0 ) 
{
	std::cout << "Default Animal constructor." << std::endl;
}

Animal::Animal( std::string _type, std::string _name, int _age ) : 
	m_type( _type ), m_name( _name ), m_age( _age ) 
{
	std::cout << "Non default Animal constructor." << std::endl;
}

Animal::Animal(const Animal &src) {
	this->m_type = src.m_type;
	this->m_name = src.m_name;
	this->m_age = src.m_age;
	std::cout << "Copy Animal constructor." << std::endl;
}

Animal::~Animal() 
{
	std::cout << "Animal destructor." << std::endl;
}

Animal&
Animal::operator=(const Animal &src) {
    if (this == &src)
		return *this;
	this->m_type = src.m_type;
	this->m_name = src.m_name;
	this->m_age = src.m_age;
    return (*this);
}

const std::string&
Animal::getType() const {
	return this->m_type;
}

void
Animal::makeSound() const {}
