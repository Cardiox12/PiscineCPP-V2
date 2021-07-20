#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void test_dog(){
	Dog *i = new Dog();
	Dog *j = new Dog(*i);
	Dog *k = new Dog();

	Dog *tmp = k;
	*k = *j;

	delete tmp;
	delete i;
	delete j;
}

void test_cat() {
	Cat *i = new Cat();
	Cat *j = new Cat(*i);
	Cat *k = new Cat();

	Cat *tmp = k;
	*k = *j;

	delete tmp;
	delete i;
	delete j;
}

void test_animal() {
	Animal **animals = new Animal*[4];

	for ( int index = 0 ; index < 4 ; index++ ){
		if ( index < 2 ) {
			animals[index] = new Dog();
		} else {
			animals[index] = new Cat();
		}
	}

	for ( int index = 0 ; index < 4 ; index++ ){
		std::cout << animals[index]->getType() << std::endl;
		animals[index]->makeSound();
	}

	for ( int index = 0 ; index < 4 ; index++ ){
		delete animals[index];
	}
	delete[] animals;
}

int		main(){
	test_dog();
	std::cout << "----------------------------------------------" << std::endl;
	test_cat();
	std::cout << "----------------------------------------------" << std::endl;
	test_animal();
	return (0);
}
