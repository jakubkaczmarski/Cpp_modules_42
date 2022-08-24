/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:51:43 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 13:58:00 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
       public:
       Awesome(void) : _n(42){return ;};
       int get(void) const{return this->_n;}
       private:
       int    _n;
};
std::ostream &operator <<(std::ostream &o, Awesome const &rhs)
{
       o << rhs.get();
       return o;
}


int main()
{
       int tab[] = {0,1,2,3,4};
       Awesome tab2[5];
       iter(tab, 5, print);
       iter(tab2, 5, print);
       // int arr[5] = {3,2,4,1,0};
       // iter(&arr[0], 5,special_func);
}