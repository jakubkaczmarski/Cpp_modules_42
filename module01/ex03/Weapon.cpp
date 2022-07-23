/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:25:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 01:56:35 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string & Weapon::getType()
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