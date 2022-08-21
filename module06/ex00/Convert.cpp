/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:36:50 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 15:03:32 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// Convert::Convert() : val_("")
// {    
// }

Convert::Convert(std::string val)
: val_(val)
{
}

void    Convert::display_all(std::string c,std::string i, std::string d, std::string f)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << d << std::endl;
    std::cout << "double: " << f << std::endl;
}

int Convert::edge_check()
{
    if(val_ == "nanf" || val_ == "nan")
    {
        this->display_all("impossible", "impossible", "nanf", "nan");
        return (1);
    }
    if(val_ == "+inff" || val_ == "+inf" || val_ == "inff" || val_ == "inf")
    {
        this->display_all("impossible","impossible", "inff", "inf");
        return (1);
    }
    if(val_ == "-inff" || val_ == "-inf")
    {
        this->display_all("impossible","impossible", "-inff", "-inf");
        return (1);
    }
    return (0);
}

int Convert::checkInput()
{
    if(this->edge_check() == 1)
        return 0;
    return 0;
}

//char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0