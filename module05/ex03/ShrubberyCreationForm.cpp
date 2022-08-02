/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:06:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 17:19:48 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : 
Form("ShrubberyCreationForm", 145, 137, "Default target")
{
    std::cout << "Default constructor for ShrubberyCreationForms form ran" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << "Parametrirized ShrubberyCreationForm constructor ran" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &cp)
: Form(cp.getName(), cp.get_grade_to_sign(),cp.get_grade_to_exec(), cp.get_target())
{
    std::cout << "Copy ShrubberyCreationForm constructor ran" << std::endl;
    *this = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
 {
     std::cout << "ShrubberyCreationForm deconstructor ran" <<std::endl;
 }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try{
         if(this->get_if_signed() == false)
        {
            throw FormNotSignedExcept();
        }else if(this->get_grade_to_exec() <=  executor.getGrade())
        {
            throw GradeTooExecToLowException();   
        }
    }catch(const std::exception &e)
    {
        std::cout << executor.getName() << " cant execute form" << e.what() << std::endl;
        return ;
    }
    std::ofstream outfile(this->get_target().append("_shrubbery"));
    if(!outfile.is_open())
    {
        std::cout << "File couldn't be created" << std::endl;
        return ;
    }
    outfile <<"     #"<<std::endl;
    outfile << "   ###" << std::endl;
    outfile << "  #####" << std::endl;
    outfile << " #######" << std::endl;
    outfile << "#########" << std::endl;
    outfile << "        #        " << std::endl;
    outfile.close();
    std::cout << executor.getName() <<" Executed " << this->getName() <<  std::endl;
}