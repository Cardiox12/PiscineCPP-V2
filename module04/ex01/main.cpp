#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int     main(){
	{
		std::cout << "============ Constructors ============" << std::endl;
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		
		std::cout << std::endl << "============ Destructors ============" << std::endl;
		delete dog;
		delete cat;
	}
	{
		Animal *animals[4];

		std::cout << std::endl << "============ Constructors ============" << std::endl;
		for ( int index = 0 ; index < 4 ; index++ ){
			if ( index < 2 ){
				animals[index] = new Dog();
			} else {
				animals[index] = new Cat();
			}
		}

		std::cout << std::endl << "============ Types ============" << std::endl;
		for ( int index = 0 ; index < 4 ; index++ ){
			std::cout << "Animal type : " << animals[index]->getType() << std::endl;
		}

		std::cout << std::endl << "============ Sounds ============" << std::endl;
		for ( int index = 0 ; index < 4 ; index++ ){
			animals[index]->makeSound();
		}

		std::cout << std::endl << "============ Destructors ============" << std::endl;
		for ( int index = 0 ; index < 4 ; index++ ){
			delete animals[index];
		}
	}
	{
		std::cout << std::endl << "============ Copies ============" << std::endl;
		Dog dog;
		{
			// If deep copy is bad, it should delete pointer in dog, creating a leak
			Dog tmp(dog);
		}
	}
	return (0);
}