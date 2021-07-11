#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		static const int fract_part;
		int m_raw_bits;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		virtual ~Fixed();
        Fixed(const Fixed &src);
       	Fixed &operator=(const Fixed &src);


		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
