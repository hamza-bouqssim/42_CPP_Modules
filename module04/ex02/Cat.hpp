/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:18:30 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/16 18:37:45 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal{
    private:
        Brain *_Brain;
    public:
        Cat();
        Cat(const Cat &_Cat);
        Cat& operator=(const Cat &_Cat);
        ~Cat();
        void makeSound() const;
};
#endif