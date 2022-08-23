/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:36:36 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/23 15:46:33 by jkaczmar         ###   ########.fr       */
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
        throw Span::Exc();
    }
}

int Span::shortestSpan()
{
    int shortest_span;
    for(int i = 0; i < vec_.size(); i++)
    {
        
    }
}

const char* Span::Exc::exc() const throw()
{
    return ("Not enought space to add another number");
}