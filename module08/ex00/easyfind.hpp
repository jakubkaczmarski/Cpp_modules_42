/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:08:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/23 14:06:09 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <algorithm>
#include <exception>

class Exc : public std::exception
{
    public:
    const char* what(void) const throw()
    {
        return ("Element not found");
    }   
};

template<typename T>
typename T::iterator   easyFind(T target, int thingy)
{
    typename T::iterator it = std::find(begin(target), end(target), thingy);
    if(it == end(target))
    {
        return it;
    }else{
        throw Exc();
    }
}