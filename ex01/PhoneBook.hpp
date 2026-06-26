/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 11:34:44 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/26 13:11:07 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

/* Ahora Contact funciona como tipo de dato*/
class   PhoneBook
{
    private:
        Contact contacts[8];
        int         index;
        int         total_contacts;
        void        is_empty(std::string &str);
        void        print_contacts(void);
        std::string replace(std::string text);
    public:
        PhoneBook();
        ~PhoneBook();
        // Métodos que se llamarán en el main
        void    add(void);
        void    search(void);
};

#endif
