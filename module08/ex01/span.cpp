/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:11:57 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/09 13:12:02 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
Span::Span(){
    
};

Span::~Span()
{};

Span::Span(unsigned int N)
{
    this->N = N;
};

Span::Span(const Span &_Span)
{
    *this = _Span;
};

Span &Span::operator=(const Span &_Span)
{
    this->N = _Span.N;
    this->numbers = _Span.numbers;
    return *this;
};
void Span::addNumber(int number)
{
    if(this->numbers.size() >= this->N)
        throw "Error";
    this->numbers.push_back(number);
};
int Span::longestSpan()
{
    
};