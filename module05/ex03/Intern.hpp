/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:51:01 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/08/01 20:58:16 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Form*   makeForm(std::string name, std::string target);

        class InternExc : public std::exception
        {
            const char *what(void) const throw();
        };
        typedef Form *(Intern::*ptr)(std::string);
    private:
        Form *do_PresidentialPardonForm(std::string target);
        Form *do_ShrubberyCreationForm(std::string target);
        Form *do_RobotomyRequestForm(std::string target);
};