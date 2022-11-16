/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:46:01 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/16 14:47:48 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal{
    public:
    WrongCat();
    WrongCat(const WrongCat &_WrongCat);
    WrongCat& operator=(const WrongCat &_WrongCat);
    ~WrongCat();
    void makeSound() const;
};
#endif