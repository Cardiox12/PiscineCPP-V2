#include <iostream>
#include <string>
#include "Array.hpp"

void test_int_array(){
	Array<int> arr(5);
	Array<int> assign;

	for ( unsigned int index = 0 ; index < arr.size() ; index++ ){
		arr[index] = index + 1;
	}

	std::cout << ">> Original values <<" << std::endl;
	for ( unsigned int index = 0 ; index < arr.size() ; index++ ){
		std::cout << arr[index] << std::endl;
	}

	Array<int> copy(arr);
	std::cout << ">> Copied values <<" << std::endl;
	for ( unsigned int index = 0 ; index < copy.size() ; index++ ){
		std::cout << copy[index] << std::endl;
	}

	assign = copy;
	std::cout << ">> Assigned values <<" << std::endl;
	for ( unsigned int index = 0 ; index < assign.size() ; index++ ){
		std::cout << assign[index] << std::endl;
	}
}

void test_string_array() {
	const char *mock_values[5] = { "A", "B", "C", "D", "E" };
	Array<std::string> arr(5);
	Array<std::string> assign;

	for ( unsigned int index = 0 ; index < arr.size() ; index++){
		arr[index] = mock_values[index];
	}

	std::cout << ">> Original values <<" << std::endl;
	for ( unsigned int index = 0 ; index < arr.size() ; index++ ){
		std::cout << arr[index] << std::endl;
	}

	Array<std::string> copy(arr);
	std::cout << ">> Copied values <<" << std::endl;
	for ( unsigned int index = 0 ; index < copy.size() ; index++ ){
		std::cout << copy[index] << std::endl;
	}

	assign = copy;
	std::cout << ">> Assigned values <<" << std::endl;
	for ( unsigned int index = 0 ; index < assign.size() ; index++ ){
		std::cout << assign[index] << std::endl;
	}
}

void test_out_of_range() {
	Array<int> arr;

	try {
		std::cout << arr[10] << std::endl;
	} catch ( std::exception &e ){
		std::cout << e.what() << std::endl;
	}
}

int	main(void){
	test_int_array();
	std::cout << "-----------------------------" << std::endl;
	test_string_array();
	std::cout << "-----------------------------" << std::endl;
	test_out_of_range();
	return (0);
}