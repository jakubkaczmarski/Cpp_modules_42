/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:29:46 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 15:19:30 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

class Contact
{
    public:
    std::string first_name_;
    std::string last_name_;
    std::string nickname_;
    std::string phone_num_;
    std::string darkest_secret_;
};

#endif