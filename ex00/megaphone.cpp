/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 12:05:09 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/06/22 10:23:01 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    megaphone(const char *str)
{
    char    c;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            c = *str ^ 32;
	    std::cout << c;
        }
        else
        {
            c = *str;
	    std::cout << c;
        }
        str++;
    }
}

int main(int argc, char **argv)
{
    int index;

    if (argc < 2)
    {
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    index = 1;
    while (argv[index])
    {
        megaphone(argv[index]);
        index++;
    }
    std::cout << std::endl;
    return (0);
}
