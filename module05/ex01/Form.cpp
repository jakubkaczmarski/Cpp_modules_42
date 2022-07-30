/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:51:12 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/30 02:01:49 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name_("Def_name"), 
    grade_to_sign_(5) ,grade_to_exec_(5)
{
    std::cout << "Form default constructor ran" << std::endl;
}

Form::Form(std::string name, int grade_exec, int grade_sign)
    : name_(name), grade_to_sign_(grade_sign),  grade_to_exec_(grade_exec)
{
    std::cout << "Paramatirized Form constructor ran" << std::endl;
    if(grade_to_exec_ < 1 || grade_to_sign_ < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }else if(grade_to_exec_ > 150 || grade_to_sign_ > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

Form::Form(const Form &cp)
{
    std::cout << "Form copy_constructor called" << std::endl;
    *this = cp;
}

Form& Form::operator=(const Form&cp)
{
    // Form n_form(signed)
    // this->grade_to_sign_ = cp.get_grade_to_sign();
    // this->grade_to_exec_ = cp.get_grade_to_exec();
    // this->signed_ = get_if_signed();
    // this->name_ = cp.getName();
    return *(this);
}