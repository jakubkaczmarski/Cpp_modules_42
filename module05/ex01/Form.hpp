/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:40:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/30 01:56:19 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    public:
        Form();
        Form(std::string name, int grade_sign, int grade_exce);
        Form(const Form& cp);
        Form &operator=(const Form&cp);
        ~Form();
        std::string getName();
        int   get_grade_to_sign();
        int   get_grade_to_exec();
        bool           get_if_signed();
        void            beSigned(Bureaucrat &b);
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
    private:
        const std::string name_;
        bool    signed_;
        const int         grade_to_sign_;
        const int         grade_to_exec_;
};

std::ostream& operator<<(std::ostream &os, const Form& fix);
#endif