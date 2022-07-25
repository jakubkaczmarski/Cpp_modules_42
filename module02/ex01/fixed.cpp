/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:12:52 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/26 00:20:28 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->num_val_ = 0;
};

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->num_val_ = other.num_val_;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fix)
{
    os << fix.getRawBits();
    return os;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

void    Fixed::setRawBits(int const num)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->num_val_ = num;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->num_val_;
}

int Fixed::toInt() const
{
    return ((int)this->num_val_ >> this->num_of_frac_bits);
}

float Fixed::toFloat()
{
    return ((float)this->num_val_ / (float)(1 << this->num_of_frac_bits));
}
Fixed::Fixed(const int num) 
{
    this->num_val_ = num * (1 << this->num_of_frac_bits);
}

Fixed::Fixed(const double num)
{
    this->num_val_ = roundf(num * (1 << this->num_of_frac_bits));
}
std::ostream& operator<<(std::ostream &os, Fixed& fix)
{
    os << fix.toFloat();
    return os;
}