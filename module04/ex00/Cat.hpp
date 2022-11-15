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