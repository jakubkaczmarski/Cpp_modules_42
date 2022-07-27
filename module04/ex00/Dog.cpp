/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:44:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:41:25 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &cp)
{
    std::cout << "Dog copy_constructor called" << std::endl;
    *this = cp;
}

Dog& Dog::operator=(const Dog&animal)
{
    this->type = animal.getType();
    return *(this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
void    Dog::makeSound() const
{
    std::cout << this->type << " Barks" << std::endl;
}