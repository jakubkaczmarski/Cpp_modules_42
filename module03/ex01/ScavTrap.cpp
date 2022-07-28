/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:39:37 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 14:39:11 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name_ = "Default name";
    this->attack_damage_ = 20;
    this->hit_points_  = 100;
    this->energy_points_ = 50;
    std::cout << "ScavTrap default constuctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name_ = name;
    this->attack_damage_ = 20;
    this->hit_points_  = 100;
    this->energy_points_ = 50;
    std::cout << "ScavTrap string constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string &  target)
{
       if(this->energy_points_ == 0 || this->hit_points_ <= 0)
    {
        std::cout << "ScavTrap cannot attack" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage" << std::endl;
    this->energy_points_--;
}

ScavTrap::ScavTrap(const ScavTrap &cp)
{
    std::cout << "Scav Trap Copy constructor called" << std::endl;
    *this = cp;
}
ScavTrap &ScavTrap::operator =(const ScavTrap &el )
{
    this->attack_damage_ = el.attack_damage_;
    this->energy_points_ = el.energy_points_;
    this->hit_points_ = el.hit_points_;
    this->name_ = el.name_;
    return *this;
}
void    ScavTrap::guardGate()
{
    if(this->energy_points_ == 0 || this->hit_points_ <= 0)
    {
        std::cout << "Cannot guard gate no energy or hitpoints" << std::endl;
        return ;
    }
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    this->energy_points_--;
}