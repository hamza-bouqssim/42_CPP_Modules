/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:16:46 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/06 01:51:24 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
template<typename T>
class Array
{
    private:
    
        T *array;
		unsigned int amount;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T> &_Array);
        Array<T> &operator= (const Array<T> &_Array);
    	unsigned int size();
        T &operator[](unsigned int index);
        ~Array();
};

template <typename T>
Array<T>::Array()
{
  this->array = new T[0];
  this->amount = 0;
};

template <typename T>
Array<T>::Array(unsigned int n)
{
   this->array = new T[n];
   this->amount = n;
};

template<typename T>
Array<T>::Array(const Array<T> &_Array)
{
	this->amount = _Array.amount;
	this->array = new T[this->amount];
	for(unsigned int i = 0; i < this->amount; i++)
		this->array[i] = _Array.array[i];
};

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &_Array)
{
	if(this->array)
		delete [] this->array;
	this->amount = _Array.amount;
	this->array = new T[this->amount];
	for(unsigned int i = 0; i < this->amount; i++)
		this->array[i] = _Array.array[i];
	return *this;
};

template<typename T>
unsigned int Array<T>::size()
{
	return this->amount;
};

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if(i < this->amount)
		return this->array[i];
	throw std::out_of_range("out of bounds!");
};

template<typename T>
Array<T>::~Array(){};
#endif