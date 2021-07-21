#include "Materia.hpp"

Materia::Materia() {

}

Materia::Materia(const Materia &src) {

}

Materia::~Materia() {};

Materia&
Materia::operator=(const Materia &src) {
    if (this == &src)
		return *this;
    return (*this);
}