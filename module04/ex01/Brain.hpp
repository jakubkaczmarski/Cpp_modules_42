/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:42:40 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 00:56:39 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
    Brain();
    ~Brain();
    Brain& operator=(const Brain&br);
    Brain(const Brain &cp);
    std::string get_idea(int id);
    private:
    std::string ideas[100];
};











#endif