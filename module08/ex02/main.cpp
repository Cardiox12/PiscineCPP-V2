#include <iostream>
#include "mutantstack.hpp"

int	main(void){
	MutantStack<int> my_stack;

	for ( int index = 0 ; index < 10 ; index++ ){
		my_stack.push( index + 1 );
	}

	std::cout << "Top : " << my_stack.top() << std::endl;
	std::cout << "Size : " << my_stack.size() << std::endl;

	for ( int index = 15 ; index < 20 ; index++ ){
		my_stack.push( index );
	}

	MutantStack<int>::iterator it = my_stack.begin();
	++it;
	--it;

	for ( ; it != my_stack.end() ; ++it ){
		std::cout << "Item : " << *it << std::endl;
	}

	std::stack<int> s(my_stack);

	while ( !s.empty() ){
		std::cout << "S item : " << s.top() << std::endl;
		s.pop();
	}
	return (0);
}
