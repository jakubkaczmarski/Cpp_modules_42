/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:19:16 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 02:00:36 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class   ClapTrap
{
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        void    attack(const std::string &  target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
    private:
        std::string name_;
        int hit_points_;
        int energy_points_;
        int attack_damage_;
};

#endif