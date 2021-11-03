#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int     main(){
    const Animal *j = new Dog();

    delete j;
    return (0);
}