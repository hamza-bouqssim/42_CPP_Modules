/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:14:47 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/19 12:06:30 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    Animal  *Animals[2];
    Animals[0] = new Cat;
    Animals[1] = new Dog;
    delete Animals[0];
    delete Animals[1];
    Cat cat1;
    {
        Cat cat2 = cat1;
    }
return 0;
}