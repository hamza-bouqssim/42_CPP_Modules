#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const Animal &_Animal);
    Animal& operator=(const Animal &_Animal);
    virtual ~Animal();
    void makeSound();
};
#endif