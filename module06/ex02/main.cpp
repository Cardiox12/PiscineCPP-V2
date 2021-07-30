#include "classes.hpp"

int		random(int min, int max){
	srand(std::time(NULL));
	return rand() % max + min;
}

Base *generate(){
	return (gen_fn[3]){ gen_a, gen_b, gen_c }[random(0, 3)]();
}

void identify_from_pointer(Base *p){
	if ( dynamic_cast<A*>( p ) != NULL ){
		std::cout << "A" << std::endl;
	} else if ( dynamic_cast<B*>( p ) != NULL ){
		std::cout << "B" << std::endl;
	} else if ( dynamic_cast<C*>( p ) != NULL ){
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown" << std::endl;
	}
}

void identify_from_reference(Base &p){
	try {
		(void)dynamic_cast<A&>( p );
		std::cout << "A" << std::endl;
	} catch ( std::exception &e ){ 
		try {
			(void)dynamic_cast<B&>( p );
			std::cout << "B" << std::endl;
		} catch ( std::exception &e ){
			try {
				(void)dynamic_cast<C&>( p );
				std::cout << "C" << std::endl;
			} catch ( std::exception &e ){ }
		}
	}
}

int		main(void){
	Base *base = generate();

	identify_from_pointer(base);
	identify_from_reference(*base);

	delete base;
	return (0);
}