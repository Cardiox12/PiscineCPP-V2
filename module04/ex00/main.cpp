#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int     main(){
    std::cout << "================ Constructors ================" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal *wrong_cat = new WrongCat();

    std::cout << std::endl << "================ Types ================" << std::endl;

    std::cout << "Dog type      : " << dog->getType() << " " << std::endl;
    std::cout << "Cat type      : " << cat->getType() << " " << std::endl;
    std::cout << "WrongCat type : " << wrong_cat->getType() << " " << std::endl;

    std::cout << std::endl << "================ Sounds ================" << std::endl;
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    meta->makeSound();
    wrong_cat->makeSound();

    std::cout << std::endl << "================ Destructors ================" << std::endl;
    delete meta;
    delete cat;
    delete dog;
    delete wrong_cat;
    return (0);
}