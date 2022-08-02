/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:14:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 16:30:44 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("Bob", 130);
    Form f("Important form", 120, 40);

    try{
        b.signForm(f);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    Bureaucrat b2("Bob", 5);
    Form f2("Another Important form", 120, 40);

    b2.signForm(f2);
}