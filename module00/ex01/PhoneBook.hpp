/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:21:52 by bbellavi          #+#    #+#             */
/*   Updated: 2021/07/02 00:26:01 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PHONE_BOOK_HPP
# define FT_PHONE_BOOK_HPP

# define MAX_CONTACT 8
# define COLUMN_WIDTH 10

# include <string>
# include <iostream>
# include <stdlib.h>
# include "Contact.hpp"

# define ADD_CMD "ADD"
# define SEARCH_CMD "SEARCH"
# define EXIT_CMD "EXIT"

class PhoneBook {
	private:
		Contact m_contacts[MAX_CONTACT];
		int		m_cursor;
		void	printColumn(std::string col);
		void	promptWait();
	public:
		PhoneBook();
		void	prompt();
		bool	addContact();
		void	search();
};

#endif
