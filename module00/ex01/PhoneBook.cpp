/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:44:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/19 23:40:36 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_num, std::string darkest_secret)
{
    if(first_name.empty() || last_name.empty() || nickname.empty() || phone_num.empty() || darkest_secret.empty())
    {
        std::cout << "You haven't provided all the data requiret to create a contact" << std::endl;
        return ;
    }
    if(contact_index_ == 7)
    {
        arr[0].first_name_ = first_name;
        arr[0].last_name_ = last_name;
        arr[0].nickname_ = nickname;
        arr[0].phone_num_ = phone_num;
        arr[0].darkest_secret_  = darkest_secret;
    }else{
        arr[contact_index_].first_name_ = first_name;
        arr[contact_index_].last_name_ = last_name;
        arr[contact_index_].nickname_ = nickname;
        arr[contact_index_].phone_num_ = phone_num;
        arr[contact_index_].darkest_secret_  = darkest_secret;
    }
    
}