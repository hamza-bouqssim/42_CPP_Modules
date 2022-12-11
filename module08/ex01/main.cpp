/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:11:52 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/11 01:47:31 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
    std::cout << "First Test:" << std::endl;
    try
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
        std::cout << *e << std::endl;
    }
    
    std::cout << "Second Test : " << std::endl;
    try
    {
        std::vector<int> v;
        Span S(100);
        for(int i = 0; i < 100; i++)
        {
            v.push_back(i);
        }
        S.addNumber(v.begin(), v.end());
        std::cout << S.shortestSpan() << std::endl;
        std::cout << S.longestSpan() << std::endl;
    }catch(const char *e)
    {
        std::cout << *e << std::endl;
    }
    return 0;
}