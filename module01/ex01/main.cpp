/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:22:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/23 16:36:08 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    Zombie *zombie_horde = zombieHorde(10,"Mark");
    for(int i = 0; i < 10; i++)
    {
        zombie_horde[i].announce();
        zombie_horde[i].~Zombie();
    }
    delete[] zombie_horde;
}