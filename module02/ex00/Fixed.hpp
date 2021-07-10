#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>

class Fixed {
	private:
		static const int fract_part;
		int m_raw_bits;
	public:
		Fixed();
		virtual ~Fixed();
        Fixed(const Fixed &src);
        Fixed &operator=(const Fixed &src);

		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif
