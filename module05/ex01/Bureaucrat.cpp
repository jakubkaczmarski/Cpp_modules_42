/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 02:11:01 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 16:13:37 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Def_name"), grade(12)
{
    std::cout << "Bureaucrat default constructor ran" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& cp)
{
     std::cout << "Bureaucrat copy_constructor called" << std::endl;
    *this = cp;
}
void   Bureaucrat::signForm(Form & form)
{
    try{
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }catch(std::exception &e)
    {
        std::cout << this->getName() << " can't sign " << form.getName() << std::endl;
    }
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat&cp)
{
    this->grade = cp.getGrade();
    this->name = cp.getName();
    return *(this);
}
Bureaucrat::Bureaucrat(const std::string name, int grade) 
: name(name)
{
    std::cout << "Bureaucrat parameter constructor run" << std::endl;
    if(grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }else if(grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }else{
        this->grade = grade;
    }
}

std::string    Bureaucrat::getName() const
{
    return this->name;
}

int                 Bureaucrat::getGrade() const
{
    return this->grade;   
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor run" << std::endl;
}
void    Bureaucrat::increase_grade()
{
    if(this->grade - 1 < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    grade--;
}

void  Bureaucrat::decrese_grade()
{
    if(this->grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    grade++;
}
const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high :O ");
} 
const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return  ("Grade too low :O");
}
std::ostream& operator<<(std::ostream &os, const Bureaucrat& fix)
{
    os << fix.getName() << ", bureaucrat grade " << fix.getGrade();
    return os;
}