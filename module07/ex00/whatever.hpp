/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:33:27 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 01:49:45 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>



template<typename Type> void swap(Type &first, Type &second);

template<typename Type> Type min(Type first, Type second);

template<typename Type> Type max(Type first, Type second);

#endif