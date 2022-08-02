/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:55:38 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 03:18:41 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>


int main(int argc, char **argv)
{
    std::string thingy;
;
    if(argc != 2)
    {
        std::cout << "Wrong number of arguments passed" << std::endl;
        return (0);
    }
    thingy = argv[1];
    // float i;
    // int i = 0;
    // for(; thingy.length() > 1 && thingy[i] && thingy[i] == ' '; i++)
    // {    
    // }
    // thingy = thingy.substr(i, thingy.length() -1);
    // if(thingy.length() > 1)
    // {
    //     std::cout << "Wrong thingy" << std::endl;
    //     return (0);
    // }
    double num = std::stod(thingy);

    std::cout << "float: " << num << "f" << std::endl;
    std::cout << "char: " << thingy[0] << std::endl;
    // std::cout << "int: " << int(thingy) << std::endl;
    // std::cout << "double: " << double(thingy) << std::endl;
}