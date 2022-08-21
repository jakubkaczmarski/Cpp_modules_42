/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:52:05 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 23:02:09 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template <typename T>
void func(T *arr_ptr, int lenght, void(func)(T))
{
    for(int i = 0; i < lenght; i++)
    {
        func(arr_ptr[i]); 
    }
}
template <typename T>
void special_func(T el)
{
    std::cout << el << std::endl;
}
#endif