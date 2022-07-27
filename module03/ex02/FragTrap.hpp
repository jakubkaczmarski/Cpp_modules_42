/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:10:29 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 02:16:49 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void    highFivesGuys();
    private:
        std::string name_;
        int hit_points_;
        int energy_points_;
        int attack_damage_;
}


#endif