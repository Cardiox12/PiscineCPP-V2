#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(){
	// const Animal *meta = new Animal(); <- Uncoment this to see the error (abstract class)
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	i->makeSound();
	j->makeSound();

	// delete meta; 
	delete i;
	delete j;
	return (0);
}