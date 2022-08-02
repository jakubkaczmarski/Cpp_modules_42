/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:36:50 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 17:44:11 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}
Convert::Convert(std::string val)
: val_(val)
{
}
void    Convert::display_char()
{
    char c = static_cast<char>(val_);
    std::cout << c << std::endl;
}