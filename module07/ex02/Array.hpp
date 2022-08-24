/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:05:23 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 14:23:41 by jkaczmar         ###   ########.fr       */
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
    ~Array();
    Array(const unsigned int n);
    Array(const Array<T> &cp);
    T &operator[](int val);
    const T &operator[](int val) const;
    class Exception_thingy : public std::exception{
        public:
        const char *what() const throw();
    };
    Array &operator=(const Array<T> &arr_cp);
    int size();
    private:
    T *arr;
    int size_;
};


#include "Array.tpp"

#endif