/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:21:00 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 02:35:06 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

void    replace_line(std::string line, std::string to_replace, std::string replace_by)
{
    if(line[0]  ||  to_replace[0] || replace_by[0])
    {}
}

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong number of arguements" << std::endl;
        return 0;
    }
    std::string to_replace = argv[2];
    std::string replace_by = argv[3];
    std::string line;
    std::ifstream file;
    std::string new_file_name = argv[1];
    new_file_name.append(".replace");
    std::ofstream new_file(new_file_name);
    file.open(argv[1]);
    if(file.is_open())
    {
        if(!new_file.is_open())
        {
            std::cout << "Couldn't create new file" << std::endl;
            return 0;
        }
        while(getline(file, line))
        {
            new_file << line;
            new_file << std::endl;
        }
    }else{
        std::cout << "Unable to open a file" << std::endl;
    }
}