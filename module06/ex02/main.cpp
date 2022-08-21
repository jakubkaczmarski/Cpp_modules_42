/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:38:42 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/21 22:51:39 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
    srand(time(NULL));
    int randNum = (rand() % 3)  +1;
    if(randNum == 1)
    {
        return new A; 
    }else if(randNum == 2)
    {
        return new B;
    }else if(randNum == 3)
    {
        return new C;
    }
    return NULL;
}   

void identify(Base* p)
{
    A *a = NULL;
    B *b = NULL;
    C *c = NULL;
    if((a = dynamic_cast<A *>(p)))
    {
        std::cout << "A object" << std::endl;
    }else if((b = dynamic_cast<B *>(p)))
    {
        std::cout << "B object" << std::endl;
    }else if((c = dynamic_cast<C *>(p)))
    {
        std::cout << "C object" << std::endl;
    }else{
        std::cout << "Different object" << std::endl;
    }
}

void identify(Base& p)
{
    Base base;
    try{
        base = dynamic_cast<A&>(p);
        std::cout << "A object" << std::endl;
    }catch(const std::bad_cast &e)
    {
        
    };
    try{
        base = dynamic_cast<B&>(p);
        std::cout << "B object" << std::endl;
    }catch(const std::bad_cast &e){};
    try{
        base = dynamic_cast<C&>(p);
        std::cout << "C object" << std::endl;
    }catch(const std::bad_cast &e){};
    
}
int main()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
}