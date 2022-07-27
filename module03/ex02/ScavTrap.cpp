/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:39:37 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 02:20:17 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
,hit_points_(50), energy_points_(100), attack_damage_(20)
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string &  target)
{
       if(this->energy_points_ == 0 || this->hit_points_ < 0)
    {
        std::cout << "ScavTrap cannot attack" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage";
    this->energy_points_--;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}