/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:36:43 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/07/30 03:06:58 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target_);
        PresidentialPardonForm(PresidentialPardonForm &cp);
        ~PresidentialPardonForm();
    private:
        std::string w_target_;
};

#endif