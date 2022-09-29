/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:19:25 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/09/29 20:59:33 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#define _string std::string
#include <iostream>
#include "contact.hpp" //class contact must stand for a phonebook contact.
#include <iomanip>

class PhoneBook{
    private:
        Contact contacts[8];
        int index;
    public:
        PhoneBook();
        void add_contact();
        void search_contacts();
};


#endif