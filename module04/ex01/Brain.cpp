/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:14:35 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/16 19:05:54 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain()
{
    std::cout << "Brain: Constructor Called" << std::endl;
};

Brain::~Brain()
{
    std::cout << "Brain: Destructor Called" << std::endl;
};

Brain::Brain(const Brain &_Brain)
{
    std::cout << "Copy Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = _Brain.ideas[i];
}

Brain &Brain::operator= (const Brain &_Brain)
{
    std::cout << "Copy Assignement Constructor Called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = _Brain.ideas[i];
    return *this;
}