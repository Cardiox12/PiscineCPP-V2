#include "Fixed.hpp"

int		main(void){
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	
	std::cout << "Div : " << Fixed(5.07f) / Fixed(2.08f) << " = " << 5.07 / 2.08 << std::endl;
	std::cout << "Mul : " << Fixed(5.07f) * Fixed(2.08f) << " = " << 5.07 * 2.08 << std::endl;
	
	std::cout << "Max : " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min : " << Fixed::min( a, b ) << std::endl;
	return 0;
}
