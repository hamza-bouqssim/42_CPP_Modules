#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal{
    public:
    Dog();
    Dog(const Dog &_Dog);
    Dog& operator=(const Dog &_Dog);
    ~Dog();
    void makeSound();
};
#endif