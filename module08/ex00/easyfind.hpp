#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>

template<template<class, class> class Container, class I>
typename Container<I, std::allocator<int> >::iterator 
easyfind(Container<I, std::allocator<I> > &container, int n){
	typename Container<I, std::allocator<int> >::iterator it = container.begin();

	for ( ; it != container.end() ; ++it ){
		if ( *it == n )
			break;
	}
	return it;
}

#endif
