/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:22:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/23 16:31:20 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->name_ << ":" << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name_ = name;
}

void    Zombie::set_zombie_name(std::string name)
{
    this->name_ = name;
}

Zombie::~Zombie()
{
    std::cout << this->name_ << " destroyed " << std::endl;
}
Zombie::Zombie()
{}

