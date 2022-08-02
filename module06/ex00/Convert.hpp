/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:36:46 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 17:45:24 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
class Convert
{
    public:
        Convert();
        Convert(std::string val);
        // void    display_int();
        // void    display_double();
        // void    display_float();
        void    display_char();
    private:
        std::string val_;
};

#endif