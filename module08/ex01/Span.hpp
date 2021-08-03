#ifndef Span_HPP
# define Span_HPP

# include <stdexcept>
# include <vector>

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

		struct IndexExceededException : public std::exception {
			const char *what() const throw();
		};

		struct SpanNotFoundException : public std::exception {
			const char *what() const throw();
		};
};

#endif