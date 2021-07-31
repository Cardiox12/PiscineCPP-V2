#include <iostream>
#include <string>
#include "iter.hpp"

void print_str_item(const std::string &item){ std::cout << item << std::endl; }
void print_cs_item(const char *item) { std::cout << item << std::endl; }
void print_int_item(int item) { std::cout << item << std::endl; }

void test_strings(){
	std::string items[3] = { "A", "B", "C" };
	
	iter(items, 3, print_str_item);
}

void test_cs(){
	const char *items[3] = { "A", "B", "C" };

	iter(items, 3, print_cs_item);
}

void test_int(){
	int items[3] = { 1, 2, 3 };

	iter(items, 3, print_int_item);
}


int	main(void){
	test_strings();
	std::cout << "============================" << std::endl;
	test_cs();
	std::cout << "============================" << std::endl;
	test_int();
	return (0);
}