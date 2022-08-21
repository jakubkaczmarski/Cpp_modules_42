/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:55:38 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 14:36:55 by jkaczmar         ###   ########.fr       */
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
    //You get string from the user
    //Then you check if it's not the special string Nan and stuff if it is you display the type dashboard
    //Then you check if it only consists of numbers or if it's one single character if not you can't really convert
    //If it consists only of numbers or one single character
    //You convert it to all the different types accross the board using static cast and display it
    int s;
    // char c = 'a';
    s = static_cast<int>(argv[0][0]);
    std::cout << "Hereee "<< s << std::endl; 
}