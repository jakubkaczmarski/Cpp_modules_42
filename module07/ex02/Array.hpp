/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:05:23 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 00:15:08 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>


template<typename T>
class Array
{
    public:
    Array();
    Array(unsigned int n);
    Array(const Array<T> &cp);
    T &operator[](unsigned int val);
    class Exception_thingy : public std::exception{
        public:
       const char *what();
    };
    Array operator=(const Array<T> &arr_cp);
    int size();
    private:
    T *arr;
    int size_;
};

#include "Array.tpp"

#endif