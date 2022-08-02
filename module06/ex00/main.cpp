/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:55:38 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 17:43:44 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Wrong number of arguments passed" << std::endl;
        return (0);
    }
    Convert d(argv[2]);
    d.display_char();
    // std::cout << "int: " << int(thingy) << std::endl;
    // std::cout << "double: " << double(thingy) << std::endl;
}