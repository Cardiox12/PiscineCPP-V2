#include "Brain.hpp"

const unsigned int Brain::IDEAS_SIZE = _IDEAS_SIZE;

Brain::Brain() {
	std::cout << "Initlizse brain, bzzzzt..." << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Copying ideas, bzzzzt..." << std::endl;
	for ( int index = 0 ; index < _IDEAS_SIZE ; index++ ){
		m_ideas[index] = src.m_ideas[index];
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor" << std::endl;
};

Brain&
Brain::operator=(const Brain &src) {
	std::cout << "Assigning ideas, bzzzzt..." << std::endl;
	if (this == &src)
		return *this;
	for ( int index = 0 ; index < _IDEAS_SIZE ; index++ ){
		m_ideas[index] = src.m_ideas[index];
	}
	return (*this);
}