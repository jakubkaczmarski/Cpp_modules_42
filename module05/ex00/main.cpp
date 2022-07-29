/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:14:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/30 01:38:03 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    Bureaucrat bob("Bob", 1);
    try{
        bob++;   
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << bob << std::endl;
}