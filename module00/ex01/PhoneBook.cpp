/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:54:59 by bbellavi          #+#    #+#             */
/*   Updated: 2021/08/13 13:08:43 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

PhoneBook::PhoneBook() : m_cursor(0) { 
	(void)m_cursor;
}

void PhoneBook::prompt() {
	std::string response;
	std::system("clear");

	std::cout << "=============== Phone Book ===============" << std::endl;
	std::cout << "1) ADD : Add Contact" << std::endl;
	std::cout << "2) SEARCH : Search Contact" << std::endl;
	std::cout << "2) EXIT : exit" << std::endl;
	std::cout << ">> ";
	
	std::cin >> response;

	if (std::cin.eof()){
		exit(EXIT_FAILURE);
	}

	if ( response == ADD_CMD ){
		std::system("clear");
		if ( !addContact() ){
			std::cout << "Contact limit exceeded" << std::endl;
			promptWait();
		}
	} else if ( response == SEARCH_CMD ){
		std::system("clear");
		search();
	} else if ( response == EXIT_CMD ){
		exit(0);
	}
}

bool PhoneBook::addContact() {
	if ( m_cursor >= MAX_CONTACT ){
		return (false);
	}
	m_contacts[m_cursor++].promptContact();
	return true;
}

void PhoneBook::search() {
	int user_index;
	std::cout << "|" << std::setw(COLUMN_WIDTH) << "index" << "|";
	std::cout << std::setw(COLUMN_WIDTH) << "first name" << "|";
	std::cout << std::setw(COLUMN_WIDTH) << "last name" << "|";
	std::cout << std::setw(COLUMN_WIDTH) << "nickname" << "|";
	std::cout << std::endl;

	for ( int index = 0 ; index < m_cursor ; index++ ){
		std::cout << "|" << std::setw(COLUMN_WIDTH) << index << "|";
		printColumn(m_contacts[index].getFirstName());
		std::cout << "|";
		printColumn(m_contacts[index].getLastName());
		std::cout << "|";
		printColumn(m_contacts[index].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "Index : ";
	std::cin >> user_index;

	if ( std::cin.eof() ){
		exit(EXIT_FAILURE);
	}

	std::system("clear");

	if ( std::cin.fail() ){
		std::cin.clear();
		std::cout << "Error: index is not integer" << std::endl;
	}
	else if ( user_index >= MAX_CONTACT ){
		std::cout << "Error: Index Too High" << std::endl;
	} 
	else if ( user_index >= m_cursor ){
		std::cout << "Error: contact does not exists" << std::endl;
	}
	else if ( user_index < 0 ) {
		std::cout << "Error: Index less than zero" << std::endl;
	} else {
		m_contacts[user_index].toString();
	}
	promptWait();
}

void PhoneBook::printColumn(std::string col)
{
	if ( col.length() <= COLUMN_WIDTH){
		std::cout << std::setw(COLUMN_WIDTH) << col;
	} else {
		std::string resized_col = col;

		resized_col.resize(COLUMN_WIDTH);
		resized_col[COLUMN_WIDTH - 1] = '.';
		std::cout << resized_col;
	}
}

void PhoneBook::promptWait(){
	std::cout << std::endl;
	std::cout << "Press Enter to Continue ..." << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
}