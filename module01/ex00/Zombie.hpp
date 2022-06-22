/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:22:33 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/22 17:25:07 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
private:
std::string name_;
public:
    void announce();
    Zombie(/* args */);
    ~Zombie();
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}
