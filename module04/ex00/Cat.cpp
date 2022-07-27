/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:41:35 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:41:12 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cp)
{
    std::cout << "Cat copy_constructor called" << std::endl;
    *this = cp;
}

Cat& Cat::operator=(const Cat&animal)
{
    this->type = animal.getType();
    return *(this);
}


Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void    Cat::makeSound() const
{
    std::cout << this->type << " Miauus" << std::endl;
}