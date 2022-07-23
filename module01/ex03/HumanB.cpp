/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:28:25 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 02:20:13 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon_type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
     this->weapon_type = &weapon;
}

HumanB::HumanB(std::string name) : name(name) {
    
}