/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 02:21:00 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 02:53:57 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <fstream>

void    replace_line(std::string line, std::string to_replace, std::string replace_by)
{
    if(replace_by[0]){}
    // check_if_for_characs(std::string line,);
    std::cout << to_replace << std::endl;
    std::cout << replace_by << std::endl;
    for(int i = 0; i < (int)line.length(); i++)
    {
        if(line[i] == to_replace[0])
        {
            int temp_i = i;
            for(int j = 0; j < (int)to_replace.length() && i < (int)line.length(); j++)
            {
                if(line[i] != to_replace[j])
                {
                    i = temp_i;
                    break;
                }
                if(line[i] == to_replace[j] && j + 1 == (int)to_replace.length())
                {
                    std::cout << "Found " << to_replace << std::endl;
                    break;
                }
                j++;
                i++;   
            }
        }
    }
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
            replace_line(line, to_replace, replace_by);
            new_file << line;
            new_file << std::endl;
        }
    }else{
        std::cout << "Unable to open a file" << std::endl;
    }
}