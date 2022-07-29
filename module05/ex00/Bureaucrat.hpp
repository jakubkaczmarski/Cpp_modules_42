/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:15:06 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/30 01:36:57 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
class Bureaucrat
{
    public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& cp);
    Bureaucrat(const std::string name, int grade);
    std::string    getName() const;
    int                 getGrade() const;
    Bureaucrat &operator=(const Bureaucrat&cp);
    Bureaucrat &operator++();
    Bureaucrat operator++(int);
    Bureaucrat &operator--();
    Bureaucrat operator--(int);
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what(void) const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what(void) const throw();
    };
    ~Bureaucrat();
    private:
    std::string   name;
    int grade;
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& fix);
#endif