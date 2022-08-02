/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:51:12 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 16:28:51 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name_("Def_name"), signed_(false),
    grade_to_sign_(5) ,grade_to_exec_(5)
{
    std::cout << "Form default constructor ran" << std::endl;
}

Form::Form(std::string name, int grade_exec, int grade_sign)
    : name_(name),signed_(false), grade_to_sign_(grade_sign),  grade_to_exec_(grade_exec)
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

Form::Form(const Form &cp) :
name_(cp.name_), signed_(cp.signed_), 
grade_to_sign_(cp.grade_to_sign_), 
grade_to_exec_(cp.grade_to_exec_)
{
    std::cout << "Form copy_constructor called" << std::endl;
    *this = cp;
}

Form& Form::operator=(const Form&cp)
{
    this->signed_ = cp.signed_;
    return *(this);
}

int Form::get_grade_to_sign()
{
    return this->grade_to_sign_;
}

int Form::get_grade_to_exec()
{
    return this->grade_to_exec_;
}

std::string Form::getName()
{
    return this->name_;
}

bool    Form::get_if_signed()
{
    return this->signed_;
}
Form::~Form()
{
    std::cout << "Destructor of form ran" << std::endl;
}
const char * Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high :O ");
} 
const char * Form::GradeTooLowException::what(void) const throw()
{
    return  ("Grade too low :O");
}

void    Form::beSigned(Bureaucrat &b)
{
    if(b.getGrade() > this->grade_to_sign_)
    {
        throw Form::GradeTooLowException();
    }else{
        this->signed_ = true;
    }
}

std::ostream& operator<<(std::ostream &os, Form& fix)
{
    if(fix.get_if_signed())
        os << "Bureaucrat " << fix.getName() << " with grades to exec " <<
                fix.get_grade_to_exec() << " and grade_to_sign " << fix.get_grade_to_sign() 
                    << " signed the document" << std::endl;
    else{
        os << "Bureaucrat " << fix.getName() << " with grades to exec " <<
                fix.get_grade_to_exec() << " and grade_to_sign " << fix.get_grade_to_sign() 
                    << " didn't sign the document" << std::endl;
    }
    return os;
                
}