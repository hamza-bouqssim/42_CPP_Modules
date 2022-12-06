/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:51:57 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/06 01:52:21 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    
    Array<int> ar0(10);

    int anArray[10] = {44, 12, 14,65,7, 3456, 77,98,70, 56};

	for (int i = 0; i < 10; i++)
		ar0[i] = anArray[i];

	std::cout << "Content Of The Array" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << ar0[i] << " ";

    std::cout << std::endl;
	try {
		ar0[-2] = 10;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}