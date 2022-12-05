/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:05:14 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/05 22:38:03 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void f(T index)
{
    std::cout << index << std::endl;
}

template<typename T>
void iter(T *array, int size, void(*f)(T))
{
    int i = 0;
    while (i < size)
    {
        f(array[i]);
        i++;
    }
    std::cout << std::endl;
}

#endif
