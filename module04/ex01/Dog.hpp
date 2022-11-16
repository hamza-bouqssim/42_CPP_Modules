/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:14:45 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/16 19:02:48 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal{
    private:
    Brain *_Brain;
    public:
    Dog();
    Dog(const Dog &_Dog);
    Dog& operator=(const Dog &_Dog);
    ~Dog();
    void makeSound() const;
};
#endif