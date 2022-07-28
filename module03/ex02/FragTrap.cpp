/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:12:43 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 14:42:50 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : name_("Default_Name"), hit_points_(100)
    , energy_points_(100), attack_damage_(30)
{
    std::cout << "FragTrap Default constructor called" << std::endl;        
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), 
hit_points_(100), energy_points_(100), attack_damage_(30)
{
    std::cout << "FragTrap string constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &cp)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = cp;
}
FragTrap &FragTrap::operator =(const FragTrap &el )
{
    this->attack_damage_ = el.attack_damage_;
    this->energy_points_ = el.energy_points_;
    this->hit_points_ = el.hit_points_;
    this->name_ = el.name_;
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Lets do a high five guys :)" << std::endl;
}
