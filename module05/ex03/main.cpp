/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:14:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/31 18:39:59 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
    {
		Bureaucrat guillaume("Guillaume", 1);
		RobotomyRequestForm form("Norminette");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		PresidentialPardonForm form("Jan");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		ShrubberyCreationForm form("Backyard");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 1);
		ShrubberyCreationForm form("Backyard");
		guillaume.executeForm(form);
	}

	{
		Bureaucrat guillaume("Guillaume", 150);
		Bureaucrat jan("Jan", 1);
		ShrubberyCreationForm form("Backyard");
		jan.signForm(form);
		guillaume.executeForm(form);
	}
}