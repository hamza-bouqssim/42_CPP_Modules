/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:14:34 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/13 17:41:21 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"


int main(void) {
    ClapTrap clap_trap("Jhon");

    std::cout << "Basic test: " << std::endl;
    clap_trap.attack("David1");
    clap_trap.takeDamage(1); // convert to 10 (should do nothing next)
    clap_trap.beRepaired(1);

    std::cout << "trying to lost all hit points:" << std::endl;
    clap_trap.attack("David2");
    clap_trap.attack("David3");
    clap_trap.attack("David4");
    clap_trap.attack("David5");
    clap_trap.attack("David6");
    clap_trap.attack("David7");
    clap_trap.attack("David8");
    clap_trap.attack("David9");

    std::cout << "Should do nothing:" << std::endl;
    clap_trap.attack("David_");
    clap_trap.attack("David_");
    clap_trap.attack("David_");
    clap_trap.beRepaired(10);
    clap_trap.beRepaired(10);
    clap_trap.beRepaired(10);
    return 0;
}
