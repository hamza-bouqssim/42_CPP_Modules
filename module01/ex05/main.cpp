/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:36:41 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/28 20:43:28 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main()
{
    Harl harl;
    
    std::cout << "Debug" << std::endl;
    harl.complain("debug");
    std::cout << std::endl;
    
    std::cout << "Info" << std::endl;
    harl.complain("info");
    std::cout << std::endl;
    
    std::cout << "Warning" << std::endl;
    harl.complain("warning");
    std::cout << std::endl;
    
    std::cout << "Error" << std::endl;
    harl.complain("error");
    
}