/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:39:13 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/23 11:11:47 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_add(const std::string& _firstName, const std::string& _lastName,
                    const std::string& _nickName, const std::string& _phoneNumber,
                    const std::string& _darkestSecret)
{
    this->first_name = _firstName;
    this->last_name = _lastName;
    this->nick_name = _nickName;
    this->phone_number = _phoneNumber;
    this->darkest_secret = _darkestSecret;
}

std::string Contact::get_first_name(void) const
{
    return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
    return (this->last_name);
}

std::string Contact::get_nick_name(void) const
{
    return (this->nick_name);
}

std::string Contact::get_phone_number(void) const
{
    return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
    return (this->darkest_secret);
}
