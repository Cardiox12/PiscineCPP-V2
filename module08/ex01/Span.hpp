#ifndef Span_HPP
# define Span_HPP

# include <algorithm>
# include <stdexcept>
# include <vector>
# include <cstdlib>
# include <ctime>

class Span {
	private:
		unsigned int		m_max_size;
		std::vector<int>	m_items;
	public:
		Span( unsigned int n );
		virtual ~Span();
		Span(const Span &src);
		Span &operator=(const Span &src);

		void addNumber( int x );
		int shortestSpan();
		int longestSpan();
		void fill(int min, int max);

		struct IndexExceededException : public std::exception {
			const char *what() const throw();
		};

		struct SpanNotFoundException : public std::exception {
			const char *what() const throw();
		};
};

#endif