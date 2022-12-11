/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:12:01 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/11 01:41:45 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
class Span
{
  private:
    unsigned int N;
    std::vector<int> numbers;
  public:
    Span();
    Span(unsigned int N);
    Span(const Span &_Span);
    Span &operator=(const Span &_Span);
    ~Span();
    
    void addNumber(int number);
    template <typename T>
    void addNumber(T begin, T end)
    {
      if(this->numbers.size() >= this->N)
        throw "Error";
      this->numbers.insert(this->numbers.begin(), begin, end);
    } 
    int shortestSpan();
    int longestSpan();
};

#endif