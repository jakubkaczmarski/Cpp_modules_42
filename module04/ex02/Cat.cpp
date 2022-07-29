/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:41:35 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/29 16:16:01 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain_ = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cp)
{
    this->brain_ = new Brain();
    std::cout << "Cat copy_constructor called" << std::endl;
    *this = cp;
}

Cat& Cat::operator=(const Cat&animal)
{
    delete this->brain_;
    this->type = animal.getType();
    this->brain_ = new Brain(*animal.brain_);
    return *(this);
}


Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete  this->brain_;
}
void    Cat::makeSound() const
{
    std::cout << this->type << " Miauus" << std::endl;
}