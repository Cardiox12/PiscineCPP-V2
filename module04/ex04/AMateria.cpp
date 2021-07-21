#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ) : m_type( type ) {}

AMateria::AMateria(const AMateria &src) {
	m_type = src.getType();
}

AMateria::~AMateria() {};

AMateria&
AMateria::operator=(const AMateria &src) {
    if (this == &src)
		return *this;
	m_type = src.getType();
    return (*this);
}

const std::string&
AMateria::getType() const {
	return m_type;
}

void
AMateria::use(ICharacter &target){ 
	(void)target;
}