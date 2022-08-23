/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:08:56 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/23 15:25:21 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int>vec;
    vec.push_back(12);
    vec.push_back(32);
    vec.push_back(123);
    vec.push_back(122);
    if(vec[0]){}
    std::cout << *easyFind(vec, 122) << std::endl;
}