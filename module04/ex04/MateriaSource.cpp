#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

}

MateriaSource::MateriaSource(const MateriaSource &src) {

}

MateriaSource::~MateriaSource() {};

MateriaSource&
MateriaSource::operator=(const MateriaSource &src) {
    if (this == &src)
		return *this;
    return (*this);
}