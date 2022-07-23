/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 12:25:50 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed
{
    public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    private:
    int num_val_;
    static const int num_of_frac_bits = 8;
};