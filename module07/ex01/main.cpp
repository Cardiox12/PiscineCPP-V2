#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void print_item(const T &item){
	std::cout << item << std::endl;
}

struct Name {
	std::string	m_name;
	Name() : m_name("bbellavi") { }
};

std::ostream &operator<<(std::ostream &os, const Name &name){
	os << name.m_name;

	return os;
}

void test_strings(){
	std::string items[3] = { "A", "B", "C" };
	
	iter(items, 3, print_item);
}

void test_cs(){
	const char *items[3] = { "A", "B", "C" };

	iter(items, 3, print_item);
}

void test_int(){
	int items[3] = { 1, 2, 3 };

	iter(items, 3, print_item);
}

void test_complex_type(){
	Name names[5];
	
	iter(names, 5, print_item);
}

int	main(void){

	test_strings();
	std::cout << "============================" << std::endl;
	test_cs();
	std::cout << "============================" << std::endl;
	test_int();
	std::cout << "============================" << std::endl;
	test_complex_type();
	return (0);
}