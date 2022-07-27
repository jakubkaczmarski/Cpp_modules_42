/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:10:29 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 02:20:36 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
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
};


#endif