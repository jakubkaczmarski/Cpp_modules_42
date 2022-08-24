/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:58:50 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/24 19:05:54 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iterator>
#include <list>
#include <vector>

int main()
{
    {
        //Test with vector
        std::cout << "Test with vector" << std::endl;
        std::vector<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack[1] << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::vector<int>::iterator it = mstack.begin();
        std::vector<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        
        std::vector<int> s(mstack);
    }
    {
         std::cout << "Test with my stack" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        std::cout << "Stack test 2" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        mstack.push(2);
        MutantStack<int>::iterator it = mstack.begin();
         MutantStack<int>::iterator ite = mstack.end();
        // ite--;
        while(it != ite)
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl;
        mstack.pop();
        mstack.pop();
        std::cout << "After using pop on twice " << std::endl;
        it = mstack.begin();
        ite = mstack.end();
        while(it != ite)
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl;
    }
    return (0);
}