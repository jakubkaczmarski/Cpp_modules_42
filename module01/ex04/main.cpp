/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:21:00 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 10:51:44 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

std::string    replace_line(std::string line, std::string to_replace, std::string replace_by)
{
    for(int i = 0; i < (int)line.length(); i++)
    {
        if(line.compare(i, to_replace.length(), to_replace) == 0)
        {
            std::string temp;
            int j;
            for(j = 0; j < i; j++)
            {
                temp.push_back(line[j]);
            }
            temp.append(replace_by);
            for(j += to_replace.length(); j < (int)line.length(); j++)
            {
                temp.push_back(line[j]);
            }
            line = temp;
        }
    }
    return line;
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


    file.open(argv[1]);
    if(file.is_open())
    {
        std::string new_file_name = argv[1];
        new_file_name.append(".replace");
        std::ofstream new_file(new_file_name);
  
        if(!new_file.is_open())
        {
            std::cout << "Couldn't create new file" << std::endl;
            return 0;
        }
        while(getline(file, line))
        {
            new_file << replace_line(line, to_replace, replace_by);
            new_file << std::endl;
        }
    }else{
        std::cout << "Unable to open a file" << std::endl;
    }
}