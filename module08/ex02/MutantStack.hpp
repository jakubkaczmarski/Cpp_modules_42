/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:52:26 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 18:59:32 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        MutantStack() : std::stack<T>(){};
        MutantStack(const MutantStack &cp)
        {
            *this = cp;
        }
        virtual ~MutantStack(void){
            std::cout << "Mutant Stack destroyed" << std::endl;
        }
        MutantStack &operator=(const MutantStack &m)
        {
            std::stack<T>::operator=(m);
            return (*this);
        }
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
        const_iterator begin() const
        {
              return (this->c.begin());
        }
        const_iterator end() const
        {
            return (this->c.end());
        }
        reverse_iterator rbegin()
        {
            return (this->c.rbegin());
        }
        reverse_iterator rend()
        {
            return (this->c.rend());
        }
        const_reverse_iterator rbegin() const{
             return (this->c.rbegin());
        }
        const_reverse_iterator rend() const
        {
            return (this->c.rend());
        }
    private:

};


#endif