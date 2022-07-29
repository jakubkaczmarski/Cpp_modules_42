/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 02:11:01 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/30 00:48:35 by jkaczmar         ###   ########.fr       */
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
Bureaucrat Bureaucrat::operator=(const Bureaucrat&cp)
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
        throw("Bureaucrat::GradeTooLowException");
    }else if(grade > 150)
    {
        throw("Bureaucrat::GradeTooHighException");
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
Bureaucrat &Bureaucrat::operator++()
{
    if(this->grade - 1 < 1)
    {
        throw("Bureaucrat::GradeTooLowException");
        return *this;
    }
    grade--;
    return *this;
}

Bureaucrat Bureaucrat::operator++(int)
{
    const Bureaucrat old = *this;
    if(this->grade - 1 < 1)
    {
        throw("Bureaucrat::GradeTooLowException");
        return old;
    }
    --(this->grade);
    return old;
}

Bureaucrat &Bureaucrat::operator--()
{
    if(this->grade + 1 > 150)
    {
        throw("Bureaucrat::GradeTooHighException");
        return *this;
    }
    grade++;
    return *this;
}

Bureaucrat Bureaucrat::operator--(int)
{
    const Bureaucrat old = *this;
    if(this->grade + 1 > 150)
    {
        throw("Bureaucrat::GradeTooHighException");
        return old;
    }
    ++(this->grade);
    return old;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& fix)
{
    os << fix.getName() << ", bureaucrat grade " << fix.getGrade();
    return os;
}