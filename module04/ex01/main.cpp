/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:47:37 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 01:01:44 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal *arr[100];
    for(int x = 0; x < 50; x++)
    {
        arr[x] = new Dog();
    }
    for(int x = 50; x < 100; x++)
    {
        arr[x] = new Cat();
    }
    //Delete the array
    for(int x = 0; x < 100; x++)
    {
        delete arr[x];    
    }
    delete j;//should not create a leak
    delete i;
    return 0;
}