/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:38:20 by bbellavi          #+#    #+#             */
/*   Updated: 2021/06/29 22:04:59 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

#define TOUPPER(c) (c - 32)

void megaphone(const char *s) {
	for ( int index = 0 ; s[index] != '\0' ; index++ ){
		if ( islower( s[index] ) ){
			std::cout << (char)TOUPPER(s[index]);
		} else {
			std::cout << s[index];
		}
	}
}

int	main(int argc, char *argv[]) {
	if ( argc > 1 ){
		for ( int index = 1 ; index < argc ; index++ ){
			megaphone(argv[index]);
		}
		std::cout << std::endl;
	} else {
		megaphone("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
	}
	return (0);
}
