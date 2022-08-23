/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:28:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/23 16:03:40 by jkaczmar         ###   ########.fr       */
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
    Span(const Span &copy);
    ~Span();
    void    addNumber(int num);
    int     shortestSpan();
    int     longestSpan();
    void    add_many_more(std::vector<int>::iterator start, std::vector<int>::iterator end);
    class Exc : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class SpanExc : public std::exception
    {
        public:
            const char* what() const throw();
    };
    private:
    unsigned long size_;
    std::vector<int> vec_;
};

#endif