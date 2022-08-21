/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:18:07 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 22:36:33 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_Data
{
    
} Data;

uintptr_t serialize(Data* ptr)
{
    uintptr_t return_ptr;

    return_ptr = reinterpret_cast<uintptr_t>(ptr);
    return return_ptr;
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr;
    ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}
int main()
{
    Data d;
    Data *ref = &d;
    uintptr_t raw;
    std::cout << "Before\n" << ref << std::endl;
    raw = serialize(ref);
    ref = deserialize(raw);
    std::cout << "At the end \n" << ref << std::endl;
    
}