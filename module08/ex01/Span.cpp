/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:36:36 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 17:46:23 by jkaczmar         ###   ########.fr       */
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

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
    std::cout << "Span destructor called" << std::endl;
}


void Span::addNumber(int num)
{
    try{
        if(vec_.size() <= size_)
        {
            std::cout << num << std::endl;
            vec_.push_back(num);
        }else{
            throw Span::Exc();
        }
    }catch(Span::Exc &e)
    {
        std::cerr << e.what() << std::endl; 
    }
   
}

void    Span::add_many_more(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    try{
        for(;start < end; start++)
        {
             if(vec_.size() <= size_)
            {
                vec_.push_back(*start);
            }else{
                throw Span::Exc();
            }
        }
       
    }catch(Span::Exc &e)
    {
        std::cerr << e.what() << std::endl; 
    }
}
//Loop throught the thingy and then compare 
//So we take two number each time index 0 and 1 
//then we compare them and look for the Span 
//Then we compare the next one 1 and 2
//And save the span into shortest span variable if it's smaller
//then previous one
int Span::shortestSpan()
{
    int shortest_span = 0;
    int temp;
    try{
        if(vec_.size() == 1 | vec_.size() == 0)
        {
            throw Span::SpanExc();
            return (0);
        }
        shortest_span = std::abs(vec_[0] - vec_[1]);
        for(unsigned long i = 1; i < vec_.size(); i++)
        {
            temp = std::abs(vec_[i - 1] - vec_[i]);
            if(shortest_span > temp)
            {
                shortest_span = temp;
            }
        }
    }catch(Span::SpanExc &e)
    {
        e.what();
    }
    return shortest_span;
}

int Span::longestSpan()
{
    int longest_Span = 0;
    int temp;
    if(vec_.size() == 1 | vec_.size() == 0)
    {
        return (0);
    }
    longest_Span = std::abs(vec_[0] - vec_[1]);;
    for(unsigned long i = 1; i < vec_.size(); i++)
    {
        temp = std::abs(vec_[i - 1] - vec_[i]);
        if(longest_Span < temp)
        {
            longest_Span = temp;
        }
    }
    return longest_Span;
}

const char* Span::Exc::what() const throw()
{
    return ("Not enought space to add another number");
}
const char* Span::SpanExc::what() const throw()
{
    return ("Cannot get span");
}