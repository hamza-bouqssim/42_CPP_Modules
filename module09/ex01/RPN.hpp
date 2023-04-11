/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:48:27 by hbouqssi          #+#    #+#             */
/*   Updated: 2023/04/11 15:48:28 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>

class RPN {
    public:
        RPN();
        RPN(const RPN &_RPN);
        RPN &operator= (const RPN &_RPN);
        ~RPN();

        //Methods:
        void applyOperator(std::stack<int> &stack, char argument);
};
#endif