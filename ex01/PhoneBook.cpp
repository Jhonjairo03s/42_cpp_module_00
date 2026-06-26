/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:11:22 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/26 13:55:36 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : index(0), total_contacts(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

/* Private Auxiliary Functions */
// ----------------------------------------------------------------------------

void    PhoneBook::is_empty(std::string &str)
{
    while (str.empty() == true && std::cin.eof() == false)
    {
        std::cout << "The information was not entered. Please try again: ";
        std::getline(std::cin, str);
    }
}

// (std::string text)
std::string PhoneBook::replace(std::string text)
{
    if (text.length() > 10)
    {
        text = text.substr(0 , 10);
        text[9] = '.';
    }
    return (text);
}

void    PhoneBook::print_contacts(void)
{
    std::string first;
    std::string last;
    std::string nickname;
    int index;

    index = 0;
    while (index < this->total_contacts)
    {
        first = this->contacts[index].get_first_name();
        last = this->contacts[index].get_last_name();
        nickname = this->contacts[index].get_nick_name();
        std::cout
            << std::setw(10) << std::right << index << '|'
            << std::setw(10) << std::right << replace(first) << '|'
            << std::setw(10) << std::right << replace(last) << '|'
            << std::setw(10) << std::right << replace(nickname) << '|'
            << std::endl;
        index++;
    }
}

// ----------------------------------------------------------------------------

void    PhoneBook::add(void)
{
    std::string first;
    std::string last;
    std::string nick;
    std::string phone;
    std::string secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, first);
    is_empty(first);
    if (std::cin.eof() == true)
        return ;

    std::cout << "Enter last name: ";
    std::getline(std::cin, last);
    is_empty(last);
    if (std::cin.eof() == true)
        return ;

    std::cout << "Enter nick name: ";
    std::getline(std::cin, nick);
    is_empty(nick);
    if (std::cin.eof() == true)
        return ;

    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone);
    is_empty(phone);
    if (std::cin.eof() == true)
        return ;

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, secret);
    is_empty(secret);
    if (std::cin.eof() == true)
        return ;

    this->contacts[this->index].set_add(first, last, nick, phone, secret);

    this->index = (this->index + 1) % 8;
    if (this->total_contacts < 8)
        this->total_contacts++;
    std::cout << "Contact successfully added!" << std::endl;
}

void    PhoneBook::search(void)
{
    std::string index;
    int         conversion_index;

    std::cout
        << std::setw(10) << std::right << "Index" << '|'
        << std::setw(10) << std::right << "first name" << '|'
        << std::setw(10) << std::right << "last name" << '|'
        << std::setw(10) << std::right << "nickname" << '|'
        << std::endl;

    print_contacts();

    std::cout << "Enter the contact index: ";
    std::getline(std::cin, index);

    if (index.empty() == true || index.size() != 1 || isdigit(index[0]) == 0)
    {
        std::cerr << "You must enter a single digit (0 through 7)" << std::endl;
        return ;
    }

    conversion_index = index[0] - '0';

    if (conversion_index >= this->total_contacts)
    {
        std::cerr << "Contact out of range." << std::endl;
        return ;
    }

    std::cout
        << "First Name: " << this->contacts[conversion_index].get_first_name() << std::endl;
    std::cout
        << "Last Name: " << this->contacts[conversion_index].get_last_name() << std::endl;
    std::cout
        << "Nick Name: " << this->contacts[conversion_index].get_nick_name() << std::endl;
    std::cout
        << "Phone Number: " << this->contacts[conversion_index].get_phone_number() << std::endl;
    std::cout
        << "Darkest Secret: " << this->contacts[conversion_index].get_darkest_secret() << std::endl;
}
