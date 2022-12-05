/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:58:03 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/05 20:17:50 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef W_HPP
#define W_HPP
#include <iostream>


template<typename T>

void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


template<typename T>
T  min(T& a, T& b)
{
    if(a > b)
        return b;
    return a;
}

template<typename T>
T max(T& a, T& b)
{
    if (a < b)
        return b;
    return a;
}

#endif