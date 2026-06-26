/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 12:14:39 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/26 13:54:36 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <csignal>

int main(void)
{
    PhoneBook   ph;
    std::string command;

    std::signal(SIGINT, SIG_IGN);
    while (true)
    {
        if (std::cin.eof() == true)
        {
            std::cout << std::endl;
            break ;
        }
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof() == true)
        {
            std::cout << std::endl;
            break ;
        }
        if (command == "ADD")
            ph.add();
        else if (command == "SEARCH")
            ph.search();
        else if (command == "EXIT")
            break ;
        else
            continue ;
    }
    return (0);
}
