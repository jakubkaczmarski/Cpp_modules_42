/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:14:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/02 17:01:24 by jkaczmar         ###   ########.fr       */
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
		PresidentialPardonForm form("Comunity Service");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}
	{
		Bureaucrat guillaume("Guillaume", 10);
		ShrubberyCreationForm form("Gardern");
		guillaume.signForm(form);
		guillaume.executeForm(form);
	}
}