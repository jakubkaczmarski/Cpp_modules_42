/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:28:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/23 15:45:24 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span
{
    public:
    Span();
    Span(unsigned long size);
    ~Span();
    void    addNumber(int num);
    int     shortestSpan();
    int     longestSpan();
    class Exc : public std::exception
    {
        const char* exc() const throw();
    };
    private:
    unsigned long size_;
    std::vector<int> vec_;
};

#endif