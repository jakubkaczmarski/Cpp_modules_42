/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:39:33 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:23:09 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
    std::cout << "WrongAnimal copy_constructor called" << std::endl;
    *this = cp;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal&animal)
{
    this->type = animal.getType();
    return *(this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sound " << std::endl;
}

std::string    WrongAnimal::getType () const
{
    return this->type;
}