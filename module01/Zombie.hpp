#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#define _string std::string
class Zombie{
        _string name;
    public:
        Zombie(_string _name);
        ~Zombie();
        void announce(void);
};

Zombie* newZombie(_string name);
void randomChump(_string name);
#endif