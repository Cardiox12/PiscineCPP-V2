#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <set>

void test_vector(){	
	std::vector<int>::iterator it;
	std::vector<int> vec;

	std::cout << "=================== Vector ===================" << std::endl;

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

void test_list() {
	std::list<int>::iterator it;
	std::list<int> list;

	std::cout << "=================== List ===================" << std::endl;

	for ( int index = 0 ; index < 10 ; index++ ){
		list.push_back(index);
	}

	it = easyfind(list, 2);
	if ( it != list.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}

	it = easyfind( list, 100 );
	if ( it != list.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}
}

void test_set(){
	std::set<int>::iterator it;
	std::set<int> set;

	std::cout << "=================== Set ===================" << std::endl;

	for ( int index = 0 ; index < 10 ; index++ ){
		set.insert(index);
	}

	it = easyfind(set, 2);
	if ( it != set.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}

	it = easyfind( set, 100 );
	if ( it != set.end() ){
		std::cout << "Found : " << *it << std::endl;
	} else {
		std::cout << "Not found" << std::endl;
	}
}


int		main(void){
	test_vector();
	test_list();
	test_set();
	return (0);
}
