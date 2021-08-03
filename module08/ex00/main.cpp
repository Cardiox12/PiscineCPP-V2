#include "easyfind.hpp"
#include <vector>
#include <array>
#include <iostream>

void test_vector(){
	std::vector<int>::iterator it;
	std::vector<int> vec;

	for ( int index = 0 ; index < 10 ; index++ ){
		vec.push_back(index);
	}

	it = easyfind( vec, 2 );
	if ( it != vec.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}

	it = easyfind( vec, 100 );
	if ( it != vec.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}
}

void test_array(){
	std::array<int, 10> arr;

	for ( int index = 0 ; index < 10 ; index++ ){
		arr[index] = index;
	}

	it = easyfind( arr, 2 );
	if ( it != arr.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}

	it = easyfind( arr, 100 );
	if ( it != arr.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}
}

int		main(void){
	test_vector();
	return (0);
}
