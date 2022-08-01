/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:52:51 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/01 21:04:47 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


const char *Intern::InternExc::what(void) const throw()
{
    return "Couldn't create the form";
}
Form *Intern::do_PresidentialPardonForm(std::string target)
{
    Form *n_form = new PresidentialPardonForm(target);
    return n_form;   
}

Form *Intern::do_ShrubberyCreationForm(std::string target)
{
    Form *n_form = new ShrubberyCreationForm(target);
    return n_form;   
}
Form *Intern::do_RobotomyRequestForm(std::string target)
{
    Form *n_form = new RobotomyRequestForm(target);
    return n_form;
}

Form*   Intern::makeForm(std::string name, std::string target)
{
    ptr arr[3] = {&Intern::do_PresidentialPardonForm, 
        &Intern::do_RobotomyRequestForm
            , &Intern::do_ShrubberyCreationForm};
    std::string names[3] = {"pardon", "robotomy", "shrubbery"};
    int i = 0;
    while(i < 3)
    {
        if(names[i].compare(name) == 0)
        {
            break;
        }
        i++;
    }
    if(i > 3)
    {
        throw InternExc();
    }
    Form *retwal = (this->*arr[i])(target);
    std::cout << "Intern creates " <<  names[i] << std::endl;
    return retwal;
}