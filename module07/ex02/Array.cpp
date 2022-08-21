/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:08:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 23:28:52 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : arr(0), size(0)
{
}
template<typename T>
Array<T>::Array(unsigned int val) : arr(new T[val]), size(val)
{
}
template<typename T>
Array<T>::Array(Array &cp) : size(cp.size), arr(0)
{
    *this = cp;
}