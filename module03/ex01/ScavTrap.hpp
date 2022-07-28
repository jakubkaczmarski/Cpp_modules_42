/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:36:54 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 14:34:44 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(const ScavTrap &cp);
        ScavTrap &operator =(const ScavTrap &el );
        ~ScavTrap();
        void    attack(const std::string &  target);
        void    guardGate();
    private:
        std::string name_;
        int hit_points_;
        int energy_points_;
        int attack_damage_;
};

#endif