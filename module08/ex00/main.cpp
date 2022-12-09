/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 05:41:49 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/09 10:57:40 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try{
        std::vector<int> v;
        v.push_back(10);
        v.push_back(4);
        v.push_back(3);
        std::cout << easyfind(v, 2) << std::endl;
    }catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //------------------------------
    try{
        std::array<int, 4> arr;
        int _arr[] = {23, 654, 8, 2026};
        for(int i = 0; i < 3; i++)
        {
            arr[i] = _arr[i];
        }
        std::cout << easyfind(arr, 8) << std::endl;
    }catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}