/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:20:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 13:27:56 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <array>

void	get_inp_for_arr(PhoneBook &phonebook)
{
	Contact contact;
	std::string input;
	std::cout << "Adding contact" << std::endl;
	std::cout << "First name" << std::endl;
	std::cin >> contact.first_name_;
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
			
			// phonebook.add_contact()
		}else if(input.compare("SEARCH") == 0)
		{

		}else if(input.compare("EXIT") == 0)
		{
			break;
		}   
	}
}