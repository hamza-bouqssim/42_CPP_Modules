/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:25:11 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/15 20:25:12 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
class Cat : public Animal{
    public:
    Cat();
    Cat(const Cat &_Cat);
    Cat& operator=(const Cat &_Cat);
    ~Cat();
    void makeSound();
};
#endif