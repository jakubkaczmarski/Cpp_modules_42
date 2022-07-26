/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/26 16:50:59 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
    static Fixed &min(Fixed &fix1, Fixed &fix2);
    static const Fixed & min(const Fixed &fix1, const Fixed &fix2);
    static Fixed &max(Fixed &fix1, Fixed &fix2);
    static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
    
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &other);
    //Comparision
    int operator > (const Fixed &other);
    int operator < (const Fixed &other);
    int operator <= (const Fixed &other);
    int operator >= (const Fixed &other);
    int operator == (const Fixed &other);
    int operator != (const Fixed &other);

    //Value manipulating operators
    Fixed operator +(const Fixed &other);
    Fixed operator -(const Fixed &other);
    Fixed operator *(const Fixed &other);
    Fixed operator /(const Fixed &other);

    //Post and pre increment
    Fixed &operator--(); 
    Fixed operator--(int); 
    Fixed operator++(int); 
    Fixed &operator++();
     
    ~Fixed();
    int     getRawBits(void) const;
    void     setRawBits(int const raw);
    int        toInt() const;
    float   toFloat() const;
    private:
    int num_val_;
    static const int num_of_frac_bits = 8;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fix);
#endif