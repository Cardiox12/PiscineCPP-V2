/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:08:15 by bbellavi          #+#    #+#             */
/*   Updated: 2021/08/13 12:39:45 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::promptContact()
{
	std::cout << "First Name : ";
	std::cin >> this->m_first_name;

	if ( std::cin.eof() ){
		exit(EXIT_FAILURE);
	}

	std::cout << "Last Name : ";
	std::cin >> this->m_last_name;

	if ( std::cin.eof() ){
		exit(EXIT_FAILURE);
	}

	std::cout << "Nickname : ";
	std::cin >> this->m_nickname;

	if ( std::cin.eof() ){
		exit(EXIT_FAILURE);
	}

	std::cout << "Phone Number : ";
	std::cin >> this->m_phone_number;

	if ( std::cin.eof() ){
		exit(EXIT_FAILURE);
	}

	std::cout << "Darkest Secret : ";
	std::cin >> this->m_darkest_secret;

	if ( std::cin.eof() ){
		exit(EXIT_FAILURE);
	}
}

void Contact::toString()
{
	std::cout << "First Name : " << m_first_name << std::endl;
	std::cout << "Last Name : " << m_last_name << std::endl;
	std::cout << "Nickname : " << m_nickname << std::endl;
	std::cout << "Phone Number : "  << m_phone_number << std::endl;
	std::cout << "Darkest Secret : " << m_darkest_secret << std::endl;
}

const std::string 
&Contact::getFirstName() const {
	return m_first_name;
}

const std::string 
&Contact::getLastName() const{
	return m_last_name;
}

const std::string 
&Contact::getNickname() const{
	return m_nickname;
}

const std::string 
&Contact::getPhoneNumber() const{
	return m_phone_number;
}

const std::string 
&Contact::getDarkestSecret() const{
	return m_darkest_secret;
}
