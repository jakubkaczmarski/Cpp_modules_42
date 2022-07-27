/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:40:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:48:57 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
    Cat();
    ~Cat();
    Cat& operator=(const Cat&animal);
    Cat(const Cat &cp);
    void    makeSound() const;
    private:
    Brain *brain_;
};



#endif