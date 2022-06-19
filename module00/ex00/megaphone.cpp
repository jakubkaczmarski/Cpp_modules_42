/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:04:30 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/06/19 21:17:34 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void print_charac(char c)
{
	if(c >= 'a' && c <= 'z' )
		std::cout << (char)(c - 32);
	else
		std::cout << (char)c;
}

int	main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for(int i = 1; argv[i]; i++)
		for(int j = 0; argv[i][j]; j++)
			print_charac(argv[i][j]);
	std::cout << std::endl;
}