#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main(){
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *k = new WrongCat();
	const WrongAnimal *l = new WrongAnimal();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << k->getType() << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	// Wrong method is called here
	k->makeSound();
	l->makeSound();

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
	return (0);
}
