/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 16:26:30 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>

class Fixed
{
    public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &copy);
    std::ostream& operator<<(std::ostream& os);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    private:
    int num_val_;
    static const int num_of_frac_bits = 8;
};

#endif