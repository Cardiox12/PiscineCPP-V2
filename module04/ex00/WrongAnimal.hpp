#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {
    protected:
        std::string m_type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();

        void makeSound() const;
        const std::string &getType() const;
};


#endif
