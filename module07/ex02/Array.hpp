/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:05:23 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 23:27:36 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


template<typename T>
class Array
{
    public:
    Array();
    Array(unsigned int n);
    Array(Array &cp);
    private:
    T *arr;
    int size;
};


#endif