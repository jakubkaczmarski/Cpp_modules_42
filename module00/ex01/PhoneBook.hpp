/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:20:48 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 13:28:17 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
    public:
        PhoneBook()
        {
            contact_index_ = 0;
        }
        void add_contact(Contact contact);
    private:
    Contact arr[8];
    int contact_index_;
};

#endif