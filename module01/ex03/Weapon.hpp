#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
	private:
		std::string m_type;
	public:
		Weapon( std::string type );
		~Weapon();

		std::string const &getType( void ) const;
		void setType( std::string newType );
};

#endif
