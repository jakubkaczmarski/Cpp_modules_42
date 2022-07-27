/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:19:41 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:22:29 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &cp);
        ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &animal);
        
        void    makeSound() const ;
        std::string getType () const;
    protected:
        std::string type;
};
#endif