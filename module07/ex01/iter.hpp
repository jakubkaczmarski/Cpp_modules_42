/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:52:05 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 13:57:37 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template <typename T>
void iter(T *arr_ptr, int lenght, void(func)(const T&))
{
    for(int i = 0; i < lenght; i++)
    {
        func(arr_ptr[i]); 
    }
}

template<typename T>
void print(T const &x)
{
       std::cout << x << std::endl;
       return ;
}
#endif