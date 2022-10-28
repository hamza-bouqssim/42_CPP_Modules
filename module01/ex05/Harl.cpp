/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:36:43 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/28 20:49:31 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-" << std::endl;
    std::cout << "ketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" << std::endl;
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" << std::endl;
    std::cout << "years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

typedef void(Harl::*PtrToMem)();

void Harl::complain(_string level){
    PtrToMem ptm[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    _string levels[4] = {"debug", "info", "warning", "error"};
    int i = -1;
    while(++i < 4 && levels[i] != level);
   
    if (levels[i] == level)
        (this->*ptm[i])();
}