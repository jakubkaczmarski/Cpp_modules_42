/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:19:21 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 19:01:23 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main()
{
    ClapTrap bob("bob");
    bob.attack("Marek");
    bob.attack("Marek");
    bob.attack("Marek");
    bob.attack("Marek");
    bob.takeDamage(10);
    bob.beRepaired(10);
    bob.takeDamage(10);
    bob.~ClapTrap();
}