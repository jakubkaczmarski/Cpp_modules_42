/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:08:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 14:33:24 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(0), size_(0)
{
}

template<typename T>
Array<T>::Array(const unsigned int val) : arr(new T[val]), size_(val)
{
}

template<typename T>
Array<T>::Array(const Array<T> &cp) :arr(0), size_(cp.size_)
{
    *this = cp;
}


template<typename T>
Array<T>::~Array<T>(void)
{
    if(this->size_ > 0)
    {
        delete[] this->arr;
    }
}

template<typename T>
const  char * Array<T>::Exception_thingy::what() const throw()
{
    return "Index out of bounds"; 
}

template<typename T>
T &Array<T>::operator[](const int val) 
{
        if(val >= 0 && val < this->size_)
        {
            return this->arr[val];
        }else{
            throw Exception_thingy();
        
        }
}
template<typename T>
const T &Array<T>::operator[](int val) const
{
    if(val >= 0 && val < this->size_)
    {
        return this->arr[val];
    }else{
        throw Exception_thingy();
    
    }
}
template<typename T>
int Array<T>::size()
{
    return size_;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &arr_cp)
{
    if(this->arr)
        {
            delete [] arr;
            this->arr = 0;
        }
        this->size_ = arr_cp.size_;
        if(this->size_ > 0)
        {
            this->arr = new T[this->size_];
            for(int i = 0; i < this->size_; i++)
            {
                this->arr[i] = arr_cp.arr[i];

            }
        }
	return (*this);
}