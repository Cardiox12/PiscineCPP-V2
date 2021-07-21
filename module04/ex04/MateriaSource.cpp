#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : m_cursor( 0 ) {
	for ( int index = 0 ; index < MATERIA_KNOWLEDGES_SIZE ; index++ ){
		m_knowledges[index] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	m_cursor = 0;
	for ( int index = 0 ; index < src.m_cursor ; index++ ){
		AMateria *materia = m_knowledges[index];

		m_knowledges[m_cursor++] = materia->clone();
	}
}

MateriaSource::~MateriaSource() {
	for ( int index = 0 ; index < m_cursor ; index++ ){
		delete m_knowledges[index];
	}
};

MateriaSource&
MateriaSource::operator=(const MateriaSource &src) {
    if (this == &src)
		return *this;
	m_cursor = src.m_cursor;
	for ( int index = 0 ; index < MATERIA_KNOWLEDGES_SIZE ; index++ ){
		AMateria *materia = src.m_knowledges[index];

		delete m_knowledges[index];
		
		if ( materia != NULL ){
			m_knowledges[index] = materia->clone();
		}
	}
    return (*this);
}

void 
MateriaSource::learnMateria(AMateria *materia){
	if ( m_cursor < MATERIA_KNOWLEDGES_SIZE ){
		m_knowledges[m_cursor++] = materia->clone();
	}
}

AMateria* 
MateriaSource::createMateria(std::string const & type){
	for ( int index = 0 ; index < MATERIA_KNOWLEDGES_SIZE ; index++ ){
		AMateria *materia = m_knowledges[index];

		if ( materia != NULL ){
			if ( materia->getType() == type ){
				return materia->clone();
			}
		}
	}
	return NULL;
}
