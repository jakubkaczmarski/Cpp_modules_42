/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:25:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/24 00:34:43 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::Weapon()
{
    
}