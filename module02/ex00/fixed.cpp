/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:12:52 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 16:26:45 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :   num_val_(0)
{
    std::cout << "Default constructor called" << std::endl;
  
};

Fixed::Fixed(const int num) 
{
    std::cout << "Int constructor called" << std::endl;
    this->num_val_ = num  << this->num_of_frac_bits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->num_val_ = 0;
    this->num_val_ = roundf(num * 256);
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->num_val_ = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

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

float Fixed::toFloat() const
{
    return (float)((float)this->num_val_ / (float)(1 << this->num_of_frac_bits));
}

int Fixed::toInt() const
{
    return ((int)this->num_val_ >> this->num_of_frac_bits);
}