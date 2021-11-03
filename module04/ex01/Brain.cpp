#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;

    for ( int index = 0 ; index < IDEA_SIZE ; index++ ){
        m_ideas[index] = std::string();
    }
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain copy constructor" << std::endl;

    for ( int index = 0 ; index < IDEA_SIZE ; index++ ){
        m_ideas[index] = other.m_ideas[index];
    }
}

Brain&
Brain::operator=(const Brain &other) {
    std::cout << "Brain assignation" << std::endl;
    
    if ( &other == this ){
        return *this;
    }
    for ( int index = 0 ; index < IDEA_SIZE ; index++ ){
        m_ideas[index] = other.m_ideas[index];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

int
Brain::getIdeasSize() const {
    return IDEA_SIZE;
}
