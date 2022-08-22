/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:36:46 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/22 18:18:51 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
class Convert
{
    public:
        Convert();
        Convert(std::string val);
        int checkInput();
        int       edge_check();
        void    display_all(std::string c,std::string i, std::string d, std::string f);
        void    display_all(char c, int i, double d, float f);
        void    display_all(int i, double d, float f);
        void    display_all( double d, float f);
        void    display_char();
        Convert		&operator=( Convert const & cp );
        Convert( Convert const & cp );
        ~Convert();
    private:
        std::string val_;
        char c_;
        int i_;
        float   f_;
        double d_;
};

#endif