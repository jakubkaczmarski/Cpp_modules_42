/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:00:15 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/31 17:06:19 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : 
Form("RobotomyForm", 72, 45, "Default target")
{
    std::cout << "Default constructor for RobotomyForm form ran" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
Form("RobotomyForm", 72, 45, target)
{
    std::cout << "Parametrirized RobotomyForm constructor ran" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &cp)
: Form(cp.getName(), cp.get_grade_to_sign(),cp.get_grade_to_exec(), cp.get_target())
{
    std::cout << "Copy RobotomyForm constructor ran" << std::endl;
    *this = cp;
}

RobotomyRequestForm::~RobotomyRequestForm()
 {
     std::cout << "RobotomyForm deconstructor ran" <<std::endl;
 }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try{
         if(this->get_if_signed() == false)
        {
            throw GradeTooLowException();
        }else if(this->get_grade_to_exec() > executor.getGrade())
        {
            throw GradeTooExecToLowException();   
        }
    }catch(const std::exception &e)
    {
        std::cout << executor.getName() << "cant execute form" << e.what() << std::endl;
        return ;
    }
    std::cout << "Drilling noises" << std::endl;
    std::srand(std::time(0));
    if(std::rand() % 100 < 50)
    {
        std::cout << "The robotomy on " << this->get_target() << " has been robotomized successfull " << std::endl;
    }
    else
    std::cout << "The robotomy on " << this->get_target() << " failed :( " << std::endl;
    std::cout << executor.getName() <<" Executed " << this->getName() <<  std::endl;
}