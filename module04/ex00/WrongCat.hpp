#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        virtual ~WrongCat();

        void makeSound() const;
        const std::string &getType() const;
};

#endif
