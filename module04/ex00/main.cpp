/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:20 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/22 18:52:04 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal ad = Animal();
    const WrongAnimal f ;

    std::cout << sizeof(meta) << '\n';
    std::cout << sizeof(ad) << '\n';
    std::cout << sizeof(f) << '\n';
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << "Test for WrongAnimal && WrongCat" << std::endl;
    const WrongAnimal* WA = new WrongCat();
    WA->makeSound();
    delete WA;
    return 0;
}