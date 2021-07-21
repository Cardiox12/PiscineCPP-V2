#include "Character.hpp"

Character::Character( const std::string &name ) : m_cursor( 0 ), m_name( name ) {
	for ( int index = 0 ; index < MATERIA_INVENTORY_SIZE ; index++ ){
		m_inventory[index] = NULL;
	}
}

Character::Character(const Character &src) {
	for ( int index = 0 ; index < MATERIA_INVENTORY_SIZE ; index++ ){
		AMateria *materia = src.m_inventory[index];

		if ( materia != NULL ){
			m_inventory[index] = materia->clone();
		}
	}
}

Character::~Character() {
	for ( int index = 0 ; index < m_cursor ; index++ ){
		delete m_inventory[index];
	}
};

Character&
Character::operator=(const Character &src) {
	if (this == &src)
		return *this;

	for ( int index = 0 ; index < src.m_cursor ; index++ ){
		delete m_inventory[index];
		m_inventory[index] = src.m_inventory[index]->clone();
	}
	return (*this);
}

void 
Character::equip(AMateria* m){
	if ( m_cursor < MATERIA_INVENTORY_SIZE ){
		m_inventory[m_cursor++] = m;
	}
}

void 
Character::unequip(int index){
	if ( index < MATERIA_INVENTORY_SIZE ){
		m_inventory[index] = NULL;
	}
}

void 
Character::use(int index, ICharacter& target){
	if ( m_inventory[index] != NULL ){
		m_inventory[index]->use(target);
	}
}
