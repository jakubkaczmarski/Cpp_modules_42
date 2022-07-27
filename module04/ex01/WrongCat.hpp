/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:40:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:38:31 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    ~WrongCat();
    WrongCat& operator=(const WrongCat&animal);
    WrongCat(const WrongCat &cp);
    void    makeSound() const;
    private:
    
};



#endif