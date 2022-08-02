/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:40:22 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 17:18:29 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(std::string name, int grade_sign, int grade_exce, std::string target);
        Form(const Form& cp);
        Form &operator=(const Form&cp);
        virtual ~Form();
        std::string getName() const;
        int   get_grade_to_sign() const;
        int   get_grade_to_exec() const;
        std::string     get_target() const ;
        virtual void execute(Bureaucrat const & executor) const = 0;
        bool           get_if_signed() const;
        void            beSigned(Bureaucrat &b) ;
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
        class GradeTooExecToLowException : public std::exception
        {
            public:
                const char* what(void) const throw();
        };
        class FormNotSignedExcept : public std::exception
        {
             public:
                const char* what(void) const throw();
        };
    private:
        const std::string name_;
        bool    signed_;
        const int         grade_to_sign_;
        const int         grade_to_exec_;
        std::string target_;
};

std::ostream& operator<<(std::ostream &os, const Form& fix);
#endif