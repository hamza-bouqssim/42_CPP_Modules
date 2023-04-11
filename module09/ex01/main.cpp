/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:48:14 by hbouqssi          #+#    #+#             */
/*   Updated: 2023/04/11 15:48:15 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: This Program Takes Only One Argument !" << std::endl;
        return 0;
    }
        RPN rpn;
        char *argument;
        int i = -1;
        std::stack<int> stack;
        
        argument = (argv[1]);
        while(argument[++i])
        {
            if (argument[i] == ' ') continue;
            if (isdigit(argument[i]))
            {
                if(isdigit(argument[i]) && isdigit(argument[i + 1]))
                {
                    std::cout << "tttError" << std::endl;
                    exit(0);
                }
                    int num = argument[i] - '0';
                    if (num >= 0 && num <= 9)
                    stack.push(num);
            }
            else if (argument[i] == '+' || argument[i] == '-' || argument[i] == '*' || argument[i] == '/')
                rpn.applyOperator(stack, argument[i]);
            else
            {
                std::cout << argument[i] << std::endl;
                std::cout << "eeError" << std::endl;
                return (0);
            }
        }
        if (stack.size() != 1)
        {
            std::cout << "Error: Check Your Input !" << std::endl;
            return (0);
        }
        std::cout << stack.top() << std::endl;
    return 0;
}