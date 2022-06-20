/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:20:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 17:49:28 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <array>
#include <unistd.h>
void	get_inp_for_arr(PhoneBook &phonebook)
{
	Contact contact;
	std::string input;
	std::cout << "Adding contact" << std::endl;
	std::cout << "First name" << std::endl;
	std::cin >> contact.first_name_;
	if(contact.first_name_.empty())
	{
		return  ;
	}
	std::cout << "Last name" << std::endl;
	std::cin >> contact.last_name_;
	std::cout << "Nickname" << std::endl;
	std::cin >> contact.nickname_;
	std::cout << "Phone num" << std::endl;
	std::cin >> contact.phone_num_;
	std::cout << "Darkest secret" << std::endl;
	std::cin >> contact.darkest_secret_;
	phonebook.add_contact(contact);
}

int main()
{
	std::string input;
	PhoneBook phonebook;
	while(1)
	{
		std::cout << "Enter one of the commands" << std::endl;    
		std::cout << "ADD | SEARCH | EXIT" << std::endl;
		std::cin >> input;
		if(input.compare("ADD") == 0)
		{
			get_inp_for_arr(phonebook);
		}else if(input.compare("SEARCH") == 0)
		{
			phonebook.display_contacts();
			phonebook.display_index_cont();
		}else if(input.compare("EXIT") == 0)
		{
			break;
		}   
	}
}