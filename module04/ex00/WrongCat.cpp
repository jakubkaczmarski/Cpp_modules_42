/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:41:35 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:26:29 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cp)
{
    std::cout << "WrongCat copy_constructor called" << std::endl;
    *this = cp;
}

WrongCat& WrongCat::operator=(const WrongCat&animal)
{
    this->type = animal.type;
    return *(this);
}


WrongCat::~WrongCat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void    WrongCat::makeSound() const
{
    std::cout << this->type << " Miauus" << std::endl;
}