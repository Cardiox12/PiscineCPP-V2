#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>
# include <string>

# define _IDEAS_SIZE 100

class Brain {
	private:
		const static unsigned int	IDEAS_SIZE;
		std::string					m_ideas[_IDEAS_SIZE];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
};

#endif