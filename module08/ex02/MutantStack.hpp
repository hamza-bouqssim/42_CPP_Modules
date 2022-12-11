/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:50:46 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/11 19:40:47 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANK_HPP
#define MUTANK_HPP
#include <iostream>
#include <stack>
#include <deque>
template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(const MutantStack &_MutantStack)
        {
            *this = _MutantStack;
        };
        MutantStack &operator=(const MutantStack &_MutantStack)
        {
            *this =  _MutantStack;
            return *this;
        };
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        
};
#endif