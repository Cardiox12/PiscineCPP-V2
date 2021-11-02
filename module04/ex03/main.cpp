#include <iostream>
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int		main(void){
	IMateriaSource* src = new MateriaSource();
	AMateria *materia = new Ice();

	src->learnMateria(materia);
	delete materia;

	materia = new Cure();
	src->learnMateria(materia);
	delete materia;

	ICharacter* me = new Character("me");
	ICharacter* you = new Character("you");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	*you = *me;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete you;
	delete bob;
	delete me;
	delete src;
	return (0);
}