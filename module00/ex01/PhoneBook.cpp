/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:44:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 22:34:42 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact contact)
{
    if(contact.get_name().empty() || contact.get_surname().empty() || contact.get_nickname().empty() || contact.get_phone_num().empty() || contact.get_darkest_secret().empty())
    {
        std::cout << "You haven't provided all the data requiret to create a contact" << std::endl;
        return ;
    }
    if(contact_index_ == 7)
    {
        contact_index_ = 0;
    }
    arr[contact_index_].set_name(contact.get_name());
    arr[contact_index_].set_surname(contact.get_surname());
    arr[contact_index_].set_nickname(contact.get_nickname());
    arr[contact_index_].set_phone_num(contact.get_phone_num());
    arr[contact_index_].set_darkest_secret(contact.get_darkest_secret());
    std::cout << "Contact Added" << std::endl;
    contact_index_++;    
}

void PhoneBook::display_contacts()
{
    std::string temp;
    if(contact_index_ == 0)
    {  
        std::cout << "No contacts to display" << std::endl;
        return ;
    }
    for(int i = 0; !arr[i].get_name().empty() ; i++)
    {
        temp = arr[i].get_name();
        std::cout << std::setw(10) << std::right << i << " | ";
        if(temp.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout <<  std::setw(1) << std::right << temp[j];
            }
            std::cout <<  std::setw(1) << std::right << "." << " | ";
        }else
            std::cout << std::setw(10) << std::right << temp << " | " ;
        temp = arr[i].get_surname();
        if(temp.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout <<  std::setw(1) << std::right << temp[j];
            }
            std::cout <<  std::setw(1) << std::right << "." << " | ";
        }else{
            std::cout << std::setw(10) << std::right << temp <<" | ";
        }
        temp = arr[i].get_nickname();
        if(temp.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout << std::setw(1) << std::right << temp[j];
            }
            std::cout << std::setw(1) << std::right <<  "." << " | " << std::endl;
        }else{
            std::cout << std::setw(10)<< std::right << temp << " | " << std::endl;
        }
    }  
}

void PhoneBook::display_index_cont()
{
    int index;
    if(contact_index_ == 0)
        return ;
    std::cout << "Type the index of desired contact :" << std::endl;
    std::cin >> index;
     if (!std::cin)
     {
         std::cout << "Wrong index " << std::endl;
         std::cin.clear(); 
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         return ;
     }
    if(index >= 8 || index < 0 || arr[index].get_name().empty())
    {
        std::cout << "Wrong index" << std::endl;
        return ;
    }
    std::cout << "Index " <<  index<< std::endl;
    std::cout << "First name " <<  arr[index].get_name() << std::endl;
    std::cout << "Last name " <<  arr[index].get_surname() << std::endl;
    std::cout << "Nickname " <<  arr[index].get_nickname()<< std::endl;
    std::cout << "Phone number " <<  arr[index].get_phone_num() << std::endl;
    std::cout << "Darkest secret " <<  arr[index].get_darkest_secret() << std::endl;
    std::cout << "_________________________________ " << std::endl;
}
