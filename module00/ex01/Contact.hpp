/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:29:46 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/20 22:16:57 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

class Contact
{
    public:
    std::string get_name();
    std::string get_surname();
    std::string get_nickname();
    std::string get_phone_num();
    std::string get_darkest_secret();
    void    set_name(std::string inp);
    void    set_surname(std::string inp);
    void    set_nickname(std::string inp);
    void    set_phone_num(std::string inp);
    void    set_darkest_secret(std::string inp);
    private:
    std::string first_name_;
    std::string last_name_;
    std::string nickname_;
    std::string phone_num_;
    std::string darkest_secret_;
};

#endif