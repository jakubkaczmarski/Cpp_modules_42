/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:28:44 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:13:30 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal &cp);
        virtual ~Animal();

        Animal &operator=(const Animal &animal);
        
        virtual void    makeSound() const ;
        std::string getType () const;
    protected:
        std::string type;
};


#endif