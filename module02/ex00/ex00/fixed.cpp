/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:12:52 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/25 03:11:25 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->num_val_ = 0;
};

Fixed::Fixed(int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->num_val_ = this->num_of_frac_bits * num * (1 << this->num_of_frac_bits);
};

Fixed::Fixed(double num)
{
    std::cout << "Double constructor called" << std::endl;
    this->num_val_ = this->num_of_frac_bits * num * (1 << this->num_of_frac_bits);
};

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

float   Fixed::toFloat(void) const
{
    return (double)this->num_val_ / (double)(1 << this->num_of_frac_bits);
}

int     Fixed::toInt(void) const
{
      return (int)this->num_val_ / (int)(1 << this->num_of_frac_bits);
}