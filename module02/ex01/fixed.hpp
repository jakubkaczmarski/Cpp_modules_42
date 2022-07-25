/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/26 00:14:52 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifdef FIXED_HPP
// #define  FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
    Fixed();
    Fixed(int num);
    Fixed(double num);
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    int        toInt() const;
    float   toFloat();
    private:
    int num_val_;
    static const int num_of_frac_bits = 8;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fix);
// #endif