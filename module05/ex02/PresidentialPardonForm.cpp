/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:45:45 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/31 16:57:36 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : 
Form("PresidentialPardon", 25, 5, "Default target")
{
    std::cout << "Default constructor for presidential form ran" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
Form("PresidentialPardon", 25, 5, target)
{
    std::cout << "Parametrirized PresidentialForm constructor ran" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cp)
: Form(cp.getName(), cp.get_grade_to_sign(),cp.get_grade_to_exec(), cp.get_target())
{
    std::cout << "Copy PresidentialForm constructor ran" << std::endl;
    *this = cp;
}

PresidentialPardonForm::~PresidentialPardonForm()
 {
     std::cout << "PresidentialPardon deconstructor ran" <<std::endl;
 }

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try{
         if(this->get_if_signed() == false)
        {
            throw GradeTooLowException();
        }else if(this->get_grade_to_exec() > executor.getGrade())
        {
            throw GradeTooLowException();   
        }
    }catch(const std::exception &e)
    {
        std::cout << executor.getName() << "cant execute form" << e.what() << std::endl;
        return ;
    }
   
    std::cout << this->get_target() <<" has been pardoned by Zaphod Beeblebrox" << std::endl;
    std::cout << executor.getName() <<" Executed " << this->getName() <<  std::endl;
}