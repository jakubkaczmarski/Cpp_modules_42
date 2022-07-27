/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:12:52 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 16:38:26 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :   num_val_(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

int Fixed::operator >(const Fixed &other)
{
    if (num_val_ < other.num_val_)
    {
        return 1;
    }else{
        return 0;
    }
}
int Fixed::operator <(const Fixed &other)
{
    if (num_val_ > other.num_val_)
    {
        return 1;
    }else{
        return 0;
    }
}
int Fixed::operator <=(const Fixed &other)
{
    if (num_val_ >= other.num_val_)
    {
        return 1;
    }else{
        return 0;
    }
}
int Fixed::operator >=(const Fixed &other)
{
    if (num_val_ <= other.num_val_)
    {
        return 1;
    }else{
        return 0;
    }
}
int Fixed::operator == (const Fixed &other)
{
    if(other.num_val_ == num_val_)
    {
        return 1;
    }else{
        return 0;
    }
}
int Fixed::operator != (const Fixed &other)
{
    if(other.num_val_ != num_val_)
    {
        return 1;
    }else{
        return 0;
    }
}


Fixed Fixed::operator +(const Fixed &other)
{
    Fixed res(this->toFloat() + other.toFloat());
    return res;
}

Fixed Fixed::operator -(const Fixed &other)
{
    Fixed res(this->toFloat() - other.toFloat());
    return res;
}

Fixed Fixed::operator *(const Fixed &other)
{
    Fixed res(this->toFloat() * other.toFloat());
    return res;
}

Fixed Fixed::operator /(const Fixed &other)
{
    Fixed res(this->toFloat() / other.toFloat());
    return res;
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
    return (float)(this->num_val_ / (float)(1 << this->num_of_frac_bits));
}
Fixed::Fixed(int num) 
{
    std::cout << "Int constructor called" << std::endl;
    this->num_val_ = num  << this->num_of_frac_bits;
}

Fixed::Fixed(float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->num_val_ = 0;
    this->num_val_ = roundf(num * 256);
}

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
    if(fix1.getRawBits() < fix2.getRawBits())
    {
        return fix2;
    }else{
        return fix1;
    }
}

const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    if(fix1.getRawBits() < fix2.getRawBits())
    {
        return fix2;
    }else{
        return fix1;
    }
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
    if(fix1.getRawBits() > fix2.getRawBits())
    {
        return fix2;
    }else{
        return fix1;
    }
}

const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    if(fix1.toFloat() > fix2.toFloat())
    {
        return fix1;
    }else{
        return fix2;
    }
}

Fixed &Fixed::operator++()
{
    num_val_++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    const Fixed old = *this;
    ++(this->num_val_);
    return old;
}

Fixed &Fixed::operator--()
{
    num_val_--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    const Fixed old = *this;
    --(this->num_val_);
    return old;
}

std::ostream& operator<<(std::ostream &os, const Fixed& fix)
{
    os << fix.toFloat();
    return os;
}