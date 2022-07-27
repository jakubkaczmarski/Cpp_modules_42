/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:41:35 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:12:54 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
}


Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void    Cat::makeSound() const
{
    std::cout << this->type << " Miauus" << std::endl;
}