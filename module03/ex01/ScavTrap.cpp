/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:39:37 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 01:43:29 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : name_(name), hit_points_(100)
    , energy_points_(50), attack_damage_(20)
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
    std::cout << "Scav trao us is now in Gate keeper mode" << std::endl;
}