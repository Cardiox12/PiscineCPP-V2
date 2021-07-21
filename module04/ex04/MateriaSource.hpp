#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define MATERIA_KNOWLEDGES_SIZE 4

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*m_knowledges[MATERIA_KNOWLEDGES_SIZE];
		int			m_cursor;
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator=(const MateriaSource &src);

		virtual void learnMateria(AMateria *materia);
		virtual AMateria* createMateria(std::string const & type);
};

#endif