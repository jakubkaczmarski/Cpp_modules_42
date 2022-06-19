/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:20:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/19 21:38:26 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    while(1)
    {
        std::cout << "Enter one of the commands" << std::endl;    
        std::cout << "ADD | SEARCH | EXIT" << std::endl;
        std::cin >> input;
        if(input.compare("ADD") == 0)
        {
        
        }else if(input.compare("SEARCH") == 0)
        {

        }else if(input.compare("EXIT") == 0)
        {
            break;
        }   
    }
}