/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:36:50 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 15:30:23 by jkaczmar         ###   ########.fr       */
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
    std::cout << "float: " << f << "f"<< std::endl;
    std::cout << "double: " << d << std::endl;
}
void    Convert::display_all(char c, int i, double d, float f)
{
    if(isprint(c))
    {
        std::cout << "char: " << c << std::endl;
    }else{
        std::cout << "char: " << "non displayable" << std::endl;
    }
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f"<< std::endl;
    std::cout << "double: " << d << std::endl;
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
    if(this->val_.length() == 1)
    {
        c_ = static_cast<char>(this->val_[0]);
        i_ = static_cast<int>(this->val_[0]);
        f_ = static_cast<float>(this->val_[0]);
        d_ = static_cast<double>(this->val_[0]);
        this->display_all(c_,i_, f_, d_);
        return 0;
    }
    d_ = atof(this->val_.c_str());
    i_ = static_cast<int>(d_);
    f_ = static_cast<float>(d_);
    if(isprint(i_))
    {
        c_ = static_cast<char>(i_);
    }else{
        c_ = 0;
    }
    this->display_all(c_, i_, f_, d_);
    return 0;
}

//char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0