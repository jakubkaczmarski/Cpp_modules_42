/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:55:38 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 01:28:30 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>




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
    int i = 0;
    for(; thingy.length() > 1 && thingy[i] && thingy[i] == ' '; i++)
    {    
    }
    thingy = thingy.substr(i, thingy.length() -1);
    std::cout << thingy << std::endl;
}