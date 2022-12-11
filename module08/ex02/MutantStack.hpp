/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:50:46 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/11 19:27:56 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANK_HPP
#define MUTANK_HPP
#include <iostream>
#include <stack>
#include <deque>
template <typename T>
class MutankStack: public std::stack<T>
{
    public:
        MutankStack();
        ~MutankStack();
        MutankStack(const MutankStack &_MutankStack)
        {
            *this = _MutankStack;
        };
        MutankStack &operator=(const MutankStack &_MutankStack)
        {
            *this =  _MutankStack;
            return *this;
        };
        typedef typename std::stack<T>::container_type::iterator it;
        it begin()
        {
            return this->c.begin();
        }
        it end()
        {
            return this->c.end();
        }
        
};
#endif