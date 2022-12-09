/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 05:41:46 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/09 10:48:57 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
#define EASY_HPP
#include <iostream>
#include <vector>
#include <array>
#include <stdexcept>

template<typename T>

int easyfind(T &array, int occurrence)
{
    typename T::iterator it;
    it = std::find(begin(array), end(array), occurrence);
    if(it == array.end())
        throw std::out_of_range("Out Of Range");
    return  (it - array.begin());
}
#endif