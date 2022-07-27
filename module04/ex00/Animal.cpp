/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:39:33 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:16:19 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &cp)
{
    std::cout << "Animal copy_constructor called" << std::endl;
    *this = cp;
}

Animal& Animal::operator=(const Animal&animal)
{
    this->type = animal.getType();
    return *(this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
void    Animal::makeSound() const
{
    std::cout << "Animal makes sound " << std::endl;
}

std::string    Animal::getType () const
{
    return this->type;
}