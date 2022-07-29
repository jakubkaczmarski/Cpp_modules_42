/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:44:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/29 16:13:32 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->brain_ = new Brain();
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &cp)
{
    this->brain_ = new Brain();
    *this = cp;
    std::cout << "Dog copy_constructor called" << std::endl;

}

Dog& Dog::operator=(const Dog&animal)
{
    delete this->brain_;
    this->type = animal.getType();
    this->brain_ = new Brain(*animal.brain_);
    return *(this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain_;
}
void    Dog::makeSound() const
{
    std::cout << this->type << " Barks" << std::endl;
}