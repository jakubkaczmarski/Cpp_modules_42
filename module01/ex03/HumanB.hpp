/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:00:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 02:19:36 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *weapon_type; 
    std::string name;
    public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif