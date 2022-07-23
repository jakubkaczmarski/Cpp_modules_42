/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:21:00 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 02:26:43 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong number of arguements" << std::endl;
        return 0;
    }
    std::string line;
    std::ifstream file;
    file.open(argv[1]);
    if(file.is_open())
    {
        while(getline(file, line))
        {
            std::cout << line << std::endl;
        }
    }else{
        std::cout << "Unable to open a file" << std::endl;
    }
}