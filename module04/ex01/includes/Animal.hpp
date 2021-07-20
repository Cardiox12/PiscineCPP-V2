#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal( std::string _type );
		virtual ~Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);


		const std::string &getType() const;
		virtual void makeSound() const;
};

#endif
