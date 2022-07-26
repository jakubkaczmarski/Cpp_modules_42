/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:36:54 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 01:44:53 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class   ScavTrap : ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void    attack(const std::string &  target);
        void    guardGate();
    private:
        
};