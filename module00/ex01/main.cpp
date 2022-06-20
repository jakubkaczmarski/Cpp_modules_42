/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:20:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 22:20:52 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	get_inp_for_arr(PhoneBook &phonebook)
{
	Contact contact;
	std::string input;
	std::cout << "Adding contact" << std::endl;
	std::cout << "First name" << std::endl;
	std::cin >> input;
	if(input.empty())
	{
		return  ;
	}
	contact.set_name(input);
	std::cout << "Last name" << std::endl;
	std::cin >> input;
	contact.set_surname(input);
	std::cout << "Nickname" << std::endl;
	std::cin >> input;
	contact.set_nickname(input);
	std::cout << "Phone num" << std::endl;
	std::cin >> input;
	contact.set_phone_num(input);
	std::cout << "Darkest secret" << std::endl;
	std::cin >> input;
	contact.set_darkest_secret(input);
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
		std::getline(std::cin, input);
		if(!std::cin.good())
		{
			std::cout << "EOF sent program terminates" << std::endl;
			break;
		}
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