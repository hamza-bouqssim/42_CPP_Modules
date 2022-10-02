#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#define _string std::string
class Zombie{
        _string name;
    public:
        void announce(void);
};

Zombie* newZombie(_string name);
void randomChump(_string name);
#endif