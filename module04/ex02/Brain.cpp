/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:42:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:56:51 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor executed" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor executed" << std::endl;
}

Brain::Brain(const Brain &cp)
{
    std::cout << "Brain copy_constructor called" << std::endl;
    *this = cp;
}

std::string Brain::get_idea(int id)
{
    if(id > 100 || id < 0)
    {
        return "";      
    }else
        return this->ideas[id];
}

Brain& Brain::operator=(const Brain&cp)
{
    for (int i = 0; i < 100; i++)
		this->ideas[i] = cp.ideas[i];
    return *(this);
}
