/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:44:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 15:22:25 by jkaczmar         ###   ########.fr       */
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
        std::cout << std::setw(10) << i << " | ";
        if(arr[i].first_name_.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout << arr[i].first_name_[j];
            }
            std::cout << "." << " | ";
        }else
            std::cout << std::setw(10) << std::right << arr[i].first_name_ << " | " ;
        if(arr[i].last_name_.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout << arr[i].last_name_[j];
            }
            std::cout << "." << " | ";
        }else{
            std::cout << std::setw(10) << std::right <<  arr[i].last_name_ << "."<<" | ";
        }
        if(arr[i].nickname_.length() > 10)
        {
            for(int j = 0; j < 9; j++ )
            {
                std::cout << arr[i].nickname_[j];
            }
            std::cout << "." << " | ";
        }else{
            std::cout << std::setw(10)<< std::right << arr[i].nickname_ << std::endl;
        }
    }  
}
