/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:22:45 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/04 00:47:33 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

 struct Data
 {
    int a;
    int b;
 };
 
uintptr_t serialize(Data* ptr)
{
    uintptr_t unsignedIntPtr = reinterpret_cast<uintptr_t>(ptr);
    return unsignedIntPtr;
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}
int main()
{
    Data data;
    data.a = 5;
    data.b = 8;
    uintptr_t ptr = serialize(&data);
    Data *ptr2 = deserialize(ptr);
    std::cout << &data << "    "  << ptr2 << std::endl;
    if(&data == ptr2)
        std::cout << "They Are The Same !" << std::endl;
    else 
        std::cout << "They Are Not The same" << std::endl;
        
    return 0;
}
    

