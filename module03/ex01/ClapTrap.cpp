/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:18:56 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 01:40:51 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : 
    name_(name), hit_points_(10)
    , energy_points_(10), attack_damage_(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string &  target)
{
    if(this->energy_points_ == 0 || this->hit_points_ < 0)
    {
        std::cout << "ClapTrap cannot attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage";
    this->energy_points_--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points_  < 0)
    {
        std::cout << "Clap Trap is dead and cannot do anything " << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name_ << " takes " << amount << " of damage " << std::endl;
    this->hit_points_ -= amount;
    if(this->hit_points_ < 0)
    {
        std::cout << "Clap trap died" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points_ == 0 || this->hit_points_ < 0)
    {
        std::cout << "Cannot repait clapTrap" << std::endl;
        return ;
    }
    std::cout << "Clap trap repairs himself by " << amount << std::endl;
    this->hit_points_ += amount;
}
