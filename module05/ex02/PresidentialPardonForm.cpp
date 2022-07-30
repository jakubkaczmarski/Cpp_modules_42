/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:45:45 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/30 02:54:30 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : 
Form("PresidentialPardon", 25, 5),
w_target_("Default target")
{
    std::cout << "Default constructor for presidential form ran" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
Form("PresidentialPardon", 25, 5),
w_target_(target)
{
    std::cout << "Parametrirized PresidentialForm constructor ran" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cp)
: Form("PresidentialPardon", 25,5), w_target_(cp.w_target_)
{
    std::cout << "Copy PresidentialForm constructor ran" << std::endl;
    *this = cp;
}

 PresidentialPardonForm::~PresidentialPardonForm()
 {
     std::cout << "PresidentialPardon deconstructor ran" <<std::endl;
 }