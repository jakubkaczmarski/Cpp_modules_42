/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:12 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/27 17:00:49 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main()
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;
	std::cout << "Comparision" << std::endl;
	//b == should be bigger
	if(a < b)
	{
		std::cout << "B is bigger" << std::endl;
	}
	std::cout << "Instructions" << std::endl;
	Fixed c(10);
	Fixed d(2);
	std::cout << a * d << std::endl;
	std::cout << c / d << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	
	return 0;
}