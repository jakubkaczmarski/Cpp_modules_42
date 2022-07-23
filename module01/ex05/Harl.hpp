/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:26:44 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 09:49:35 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class  Harl
{
    public:
        void    complain(std::string level);
    private:
        void    debug();
        void    info();
        void    warning();
        void    error();       
};