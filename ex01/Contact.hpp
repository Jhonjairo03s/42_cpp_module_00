/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:05:03 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/23 11:37:37 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class   Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        // setter
        void    set_add(const std::string& _firstName, const std::string& _lastName,
                        const std::string& _nickName, const std::string& _phoneNumber,
                        const std::string& _darkestSecret);
        // getter
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nick_name(void) const;
        std::string get_phone_number(void) const;
        std::string get_darkest_secret(void) const;
};

#endif
