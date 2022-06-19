/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:20:48 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/19 23:32:45 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class Phonebook
{
    public:
        void add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_num, std::string darkest_secret);
    private:
    Contact arr[8];
    int contact_index = 0;
};

#endif