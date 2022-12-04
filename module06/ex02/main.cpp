/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:27:48 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/04 18:38:42 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
int main(void) {
    Base obj;
        Base *test = new A;
        obj.generate();
        std::cout << std::endl;
        obj.identify(test);
        std::cout << std::endl;
        obj.identify(*test);
    return 0;
}