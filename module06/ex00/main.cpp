/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:55:38 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/22 18:14:02 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Convert.hpp"
#include <limits.h>

int main(int argc, char **argv)
{
    if(argc != 2 && argv[0])
    {
        std::cout << "Wrong number of arguments passed" << std::endl;
        return (0);
    }
    std::string tmp = argv[1];
    Convert conv(tmp);
    conv.checkInput();
}