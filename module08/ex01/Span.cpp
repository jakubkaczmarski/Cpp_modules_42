/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:36:36 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/23 15:44:05 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size_(0)
{
}

Span::Span(unsigned long size) 
{
    size_ = size;
}

Span::~Span()
{
    std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int num)
{
    if(vec_.size() <= size_)
    {
        vec_.push_back(num);
    }else{
        
    }
}


const char* Span::Exc::exc() const throw()
{
    return ("Not enought space to add another number");
}