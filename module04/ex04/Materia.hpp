#ifndef Materia_HPP
# define Materia_HPP

class Materia {
	private:

	public:
		Materia();
		virtual ~Materia();
        Materia(const Materia &src);
        Materia &operator=(const Materia &src);
};

#endif