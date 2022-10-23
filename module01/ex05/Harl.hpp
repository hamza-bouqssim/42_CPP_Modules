/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:36:34 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/23 18:36:35 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#define _string std::string
class Harl{
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(_string level);
};
#endif 