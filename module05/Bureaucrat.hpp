/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:15:06 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/28 02:12:47 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
    public:
    Bureaucrat(std::string name, int grade);
    std::string    getName();
    int                 getGrade();
    Bureaucrat operator++();
    ~Bureaucrat();
    private:
    const std::string   name;
    int grade;
}

#endif