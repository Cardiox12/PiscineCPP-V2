#ifndef AMateria_HPP
# define AMateria_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string m_type;
	public:
		AMateria( std::string const & type );
		AMateria( const AMateria &rhs );
		AMateria &operator=( const AMateria &rhs );
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif