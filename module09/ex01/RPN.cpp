/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:48:23 by hbouqssi          #+#    #+#             */
/*   Updated: 2023/04/11 15:48:24 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

};
RPN::~RPN()
{

};

RPN::RPN(RPN const &_RPN)
{
    *this = _RPN;
};

RPN &RPN::operator=(RPN const &_RPN)
{
	(void)_RPN;
    return (*this);
};

void    RPN::applyOperator(std::stack<int> &stack, char argument)
{
    int   number1;
    int   number2;
    if (stack.size() < 2)
    {
        std::cout << "Error: Something Happened In Your Stack" << std::endl;
        exit(0);
    }
    number1 = stack.top();
    stack.pop();
    number2 = stack.top();
    stack.pop();
    if (argument == '*')
        stack.push(number2 * number1);
    if (argument == '/')
    {
        if (number1 == 0){
            std::cout << "Error: Cannot Divide The Number" << std::endl;
            exit(0);
        }
        stack.push(number2 / number1);
    }
    if (argument == '+')
        stack.push(number2 + number1);
    if (argument == '-')
        stack.push(number2 - number1);
}
