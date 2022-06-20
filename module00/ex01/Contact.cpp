/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:10:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 22:32:42 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_name()
{
    return this->first_name_;
}
std::string Contact::get_surname()
{
    return  this->last_name_;
}
std::string Contact::get_nickname()
{
    return this->nickname_;
}
std::string Contact::get_phone_num()
{
    return this->phone_num_;
}
std::string Contact::get_darkest_secret()
{
    return this->darkest_secret_;
}
void    Contact::set_name(std::string inp)
{
    this->first_name_ = inp;
}
void    Contact::set_surname(std::string inp)
{
    this->last_name_ = inp;
}
void    Contact::set_nickname(std::string inp)
{
    this->nickname_ = inp;
}
void    Contact::set_phone_num(std::string inp)
{
    this->phone_num_ = inp;
}
void    Contact::set_darkest_secret(std::string inp)
{
    this->darkest_secret_ = inp;
}