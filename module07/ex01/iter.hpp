#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef>

template<typename T>
void iter(T *array, std::size_t size, void (*f)(const T&)){
	for ( std::size_t index = 0 ; index < size ; index++ ){
		f( array[index] );
	}
}

#endif /* ITER_HPP */
