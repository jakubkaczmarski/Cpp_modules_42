/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:44:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 17:51:54 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact contact)
{
    if(contact.first_name_.empty() || contact.last_name_.empty() || contact.nickname_.empty() || contact.phone_num_.empty() || contact.darkest_secret_.empty())
    {
        std::cout << "You haven't provided all the data requiret to create a contact" << std::endl;
        return ;
    }
    if(contact_index_ == 7)
    {
        contact_index_ = 0;
    }
    arr[contact_index_].first_name_ = contact.first_name_;
    arr[contact_index_].last_name_ = contact.last_name_;
    arr[contact_index_].nickname_ = contact.nickname_;
    arr[contact_index_].phone_num_ = contact.phone_num_;
    arr[contact_index_].darkest_secret_  = contact.darkest_secret_;
    std::cout << "Contact Added" << std::endl;
    contact_index_++;    
}

void PhoneBook::display_contacts()
{
    if(contact_index_ == 0)
    {  
        std::cout << "No contacts to display" << std::endl;
        return ;
    }
    for(int i = 0; !arr[i].first_name_.empty() ; i++)
    {
        std::cout << std::setw(10) << std::right << i << " | ";
        if(arr[i].first_name_.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout <<  std::setw(1) << std::right << arr[i].first_name_[j];
            }
            std::cout <<  std::setw(1) << std::right << "." << " | ";
        }else
            std::cout << std::setw(10) << std::right << arr[i].first_name_ << " | " ;
        if(arr[i].last_name_.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout <<  std::setw(1) << std::right << arr[i].last_name_[j];
            }
            std::cout <<  std::setw(1) << std::right << "." << " | ";
        }else{
            std::cout << std::setw(10) << std::right <<  arr[i].last_name_ <<" | ";
        }
        if(arr[i].nickname_.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout << std::setw(1) << std::right << arr[i].nickname_[j];
            }
            std::cout << std::setw(1) << std::right <<  "." << " | " << std::endl;
        }else{
            std::cout << std::setw(10)<< std::right << arr[i].nickname_ << " | " << std::endl;
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
    if(index >= 8 || index < 0)
    {
        std::cout << "Wrong index" << std::endl;
        return ;
    }
    std::cout << "Index " <<  index<< std::endl;
    std::cout << "First name " <<  arr[index].first_name_ << std::endl;
    std::cout << "Last name " <<  arr[index].last_name_ << std::endl;
    std::cout << "Nickname " <<  arr[index].nickname_ << std::endl;
    std::cout << "Phone number " <<  arr[index].phone_num_ << std::endl;
    std::cout << "Darkest secret " <<  arr[index].darkest_secret_ << std::endl;
    std::cout << "_________________________________ " << std::endl;
}
