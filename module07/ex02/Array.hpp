#ifndef Array_HPP
# define Array_HPP

# include <stdexcept>

template<typename T>
class Array {
	private:
		unsigned int	m_size;
		T				*m_items;
	public:
		Array() : m_size( 0 ), m_items( NULL ) {}
		Array( unsigned int n ) : m_size( n ), m_items( new T[n]() ) {}

		virtual ~Array() {
			delete[] m_items;
		}

        Array(const Array &src){
			m_size = src.m_size;
			m_items = new T[m_size];

			for ( unsigned int index = 0 ; index < m_size ; index++ ){
				m_items[index] = src.m_items[index];
			}
		}

        Array &operator=(const Array &src){
			if ( this == &src ){
				return *this;
			}
			delete[] m_items;
			m_size = src.m_size;
			m_items = new T[m_size];

			for ( unsigned int index = 0 ; index < m_size ; index++ ){
				m_items[index] = src.m_items[index];
			}
			return *this;
		}

		T &operator[](unsigned int idx){
			if ( idx >= m_size ){
				throw Array::IndexException();
			}
			return m_items[idx];
		}

		unsigned int size() const {
			return m_size;
		}

		struct IndexException : public std::exception {
			const char *what() const throw() {
				return "IndexException: index out of range";
			}
		};
};

#endif