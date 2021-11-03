#ifndef DOG_HPP
#define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal {
    private:
        Brain *m_brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        virtual ~Dog();

        void makeSound() const;
};

#endif