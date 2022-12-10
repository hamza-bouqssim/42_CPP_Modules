/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:11:57 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/10 23:07:37 by hbouqssi         ###   ########.fr       */
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
    int longSpan;
    int bigger;
    bigger = 0;
    if(this->numbers.size() < 2)
        throw "Span contains less than two numbers";
    std::vector<int>::iterator it1, it2;
    std::sort(this->numbers.begin(), this->numbers.end());
    // for(it =  this->numbers.begin() ; it != this->numbers.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
    it1 = this->numbers.begin();
    it2 = this->numbers.end();
    for (it1 = this->numbers.begin(); it1 != this->numbers.end(); it1++)
        {
            for (it2 = this->numbers.begin(); it2 != this->numbers.end(); it2++)
            {
                longSpan = (*it1 - *it2);
                if (bigger < longSpan)
                    bigger = longSpan;
            }
        }
    return  bigger;
}

int Span::shortestSpan(){
    if (this->numbers.size() < 2) {
      throw "Span contains less than two numbers";
    }
    std::vector<int>_numbers = this->numbers;
    std::sort(_numbers.begin(), _numbers.end());
    int min_span = _numbers[1] - _numbers[0];
    for (size_t i = 1; i < _numbers.size(); i++) {
      int span = _numbers[i] - _numbers[i - 1];
      if (span < min_span) {
        min_span = span;
      }
    }
    return min_span;
  }
    