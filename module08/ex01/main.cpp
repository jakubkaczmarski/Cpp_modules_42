/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:40:26 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 17:52:00 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << " " << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << " " << std::endl;
    Span sb = Span(5);
    std::vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(123);
    sb.add_many_more(v.begin(), v.end());
    std::cout << sb.shortestSpan() << std::endl;
    std::cout << sb.longestSpan() << std::endl;
	return 0;
}