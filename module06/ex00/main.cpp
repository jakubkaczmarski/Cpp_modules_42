/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:55:38 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 14:19:43 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    if(argc != 2 && argv[0])
    {}
    //     std::cout << "Wrong number of arguments passed" << std::endl;
    //     return (0);
    // }
    // std::string name = "Marek";
    int s;
    // char c = 'a';
    s = static_cast<int>(argv[0][0]);
    std::cout << "Hereee "<< s << std::endl; 
}