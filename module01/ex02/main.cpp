/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:47:36 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/23 10:45:35 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string sentence = "HI THIS IS BRAIN";
    std::string *stringPTR = &sentence;
    std::string &stringREF = sentence;
    std::cout << "Memory address of string variable " << &sentence << std::endl;
    std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of string variable " << sentence << std::endl;
    std::cout << "Value pointed to by stringPTR " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF " << stringREF << std::endl;
    
}