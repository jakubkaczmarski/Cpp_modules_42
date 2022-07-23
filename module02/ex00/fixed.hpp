/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 11:13:23 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed
{
    public:
    Fixed();
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    private:
    int num_val;
    static const int num_of_frac_bits;
}