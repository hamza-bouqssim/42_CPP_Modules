/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:37:48 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/29 01:40:53 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if(ac != 2)
    {
        std::cout << "This Program Is Expecting An Argument" << std::endl;
        return 0;
    }
    harl.complain(av[1]);
    return 0;
}