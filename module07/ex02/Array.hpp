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
template<typename T>

class Array
{
    private:
    
        T *array;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T> &_Array);
        Array<T> &operator= (const Array<T> &_Array);
        int size();
        Array &operator[](const Array<T> &_Array);
        ~Array();
};

template <typename T>
Array<T>::Array()
{
  this->array = new T[0];
};

template <typename T>
Array<T>::Array(unsigned int n)
{
   this->array = new T[n];
    
}

#endif