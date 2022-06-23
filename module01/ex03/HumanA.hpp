/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:26:53 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/24 00:34:14 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
    Weapon &weapon; 
    std::string name;
    public:
    HumanA(std::string name, Weapon &weapon);
    void attack();
};
#endif