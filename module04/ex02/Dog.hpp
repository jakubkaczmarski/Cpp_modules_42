/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:44:21 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:47:15 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
    Dog();
    ~Dog();
    Dog& operator=(const Dog&animal);
    Dog(const Dog &cp);
    void    makeSound() const;
    private:
    Brain *brain_;
};

#endif