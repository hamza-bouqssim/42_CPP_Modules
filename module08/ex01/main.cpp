/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:11:52 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/10 23:04:11 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{   try
    {
        Span sp = Span(5);
        sp.addNumber(3);
        sp.addNumber(8);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(17);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }catch(const char *e)
    {
        std::cout << e << std::endl;
    }
        
    return 0;
}