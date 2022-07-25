/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:12:52 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/26 01:22:10 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() :   num_val_(0)
{
    std::cout << "Default constructor called" << std::endl;
  
};

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

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

float Fixed::toFloat() const
{
    return (float)((float)this->num_val_ / (float)(1 << this->num_of_frac_bits));
}
Fixed::Fixed(int num) 
{
    this->num_val_ = num  << this->num_of_frac_bits;
}

Fixed::Fixed(float num)
{
    this->num_val_ = 0;
    this->num_val_ = roundf(num * 256);
    // printf("Send help %d", num_val_);
    printf("%f\n",this->toFloat());
    // printf("Zium %d \n", this->num_val_);
}
std::ostream& operator<<(std::ostream &os, const Fixed& fix)
{
    os << fix.toFloat();
    return os;
}