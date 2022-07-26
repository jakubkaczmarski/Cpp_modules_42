/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/25 03:29:05 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed
{
    public:
    Fixed();
    Fixed(int num);
    Fixed(double num);
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