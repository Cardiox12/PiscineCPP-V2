#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal( std::string _type );
		virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &src);

		const std::string &getType() const;
		void makeSound() const;
};

#endif