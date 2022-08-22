/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:08:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/23 01:00:57 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : arr(0), size_(0)
{
}
template<typename T>
Array<T>::Array(unsigned int val) : arr(new T[val]), size_(val)
{
}
template<typename T>
Array<T>::Array(Array &cp) : size_(cp.size), arr(0)
{
    *this = cp;
}
template<typename T>
const  char * Array<T>::Exception_thingy::what()
{
    return "Index out of bounds"; 
}
template<typename T>
T &Array<T>::operator[](unsigned int val)
{
    try{
        if(val > 0 && val < this->size_)
        {
            return this->arr[val];
        }else{
            throw Exception_thingy();
        
        }
    }catch(Exception_thingy m)
    {
        std::cout << m.what() << std::endl;
    }
    
}

template<typename T>
int Array<T>::size()
{
    return size;
}

template<typename T>
Array<T> Array<T>::operator=(const Array<T> &arr_cp)
{
    if(this->arr)
    {
        delete [] arr;
        this->arr = 0;
    }
    this->size = arr_cp.size;
    if(this->size > 0)
    {
        this->arr = new T[this->size];
        for(int i = 0; i < this->size; i++)
        {
            this->arr[i] = arr_cp[i];

        }
    }
    return *this;
}