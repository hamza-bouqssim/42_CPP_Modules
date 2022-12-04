/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:27:41 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/04 18:35:04 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base::~Base()
{
};
Base *Base::generate(void)
{
    srand(time(NULL));
    Base *bp;
    int nClass = rand() % 3;
    switch(nClass)
    {
        case 0:
			std::cout << "A: Is Instanciated" << std::endl;
			bp = new A();
         	break;
        case 1:
			std::cout << "B: Is Instanciated" << std::endl;
            bp = new B();
            break;
        case 2:
			std::cout << "C: Is Instanciated" << std::endl;
            bp = new C();
            break;
    }
    return bp;
}
void Base::identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if(a)
		std::cout << "~~~~~~ A ~~~~~~" << std::endl;
	else if(b)
		std::cout << "~~~~~~ B ~~~~~~" << std::endl;
	else if (c)
		std::cout << "~~~~~~ C ~~~~~~" << std::endl;
}
void Base::identify(Base &p)
{
	try{
		Base &a = dynamic_cast<A &>(p);
		std::cout << &a << " ~~~~~~ A ~~~~~~" << std::endl;
		
	}catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try{
		Base &b = dynamic_cast<B &>(p);
		std::cout << &b << " ~~~~~~ B ~~~~~~" << std::endl;
		
	}catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try{
		Base &c = dynamic_cast<C &>(p);
		std::cout << &c << " ~~~~~~ C ~~~~~~" << std::endl;
		
	}catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
