/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:51:12 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 16:31:54 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name_("Def_name"), signed_(false),
    grade_to_sign_(5) ,grade_to_exec_(5), target_("Def_targ")
{
    std::cout << "Form default constructor ran" << std::endl;
}
Form::~Form()
{
    std::cout << "Destructor of form ran" << std::endl;
}
Form::Form(std::string name, int grade_exec, int grade_sign, std::string target)
    : name_(name),signed_(false), grade_to_sign_(grade_sign),  grade_to_exec_(grade_exec), target_(target)
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
grade_to_exec_(cp.grade_to_exec_),
target_(cp.target_)
{
    std::cout << "Form copy_constructor called" << std::endl;
    *this = cp;
}

Form& Form::operator=(const Form&cp)
{
    this->signed_ = cp.signed_;
    return *(this);
}

int Form::get_grade_to_sign() const
{
    return this->grade_to_sign_;
}

int Form::get_grade_to_exec() const
{
    return this->grade_to_exec_;
}

std::string Form::getName() const
{
    return this->name_;
}

std::string Form::get_target() const
{
    return this->name_;
}

bool    Form::get_if_signed() const
{
    return this->signed_;
}

const char * Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high :O ");
} 
const char * Form::GradeTooLowException::what(void) const throw()
{
    return  ("Grade too low :O");
}

const char * Form::GradeTooExecToLowException::what(void) const throw()
{
    return  ("Grade to exec to low :O");
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