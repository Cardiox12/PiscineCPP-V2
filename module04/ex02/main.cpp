#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int     main(){
	// Animal *animal = new Animal(); // ->> Uncomment this to see the error

	std::cout << "============ Constructors ============" << std::endl;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	
	std::cout << std::endl << "============ Sounds ============" << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl << "============ Destructors ============" << std::endl;
	delete dog;
	delete cat;
	return (0);
}