#include "PmergeMe.hpp"

int PmergeMe::is_number(std::string arg)
{
    int i = -1;
    while(++i < (int)arg.size())
    {
        if(!std::isdigit(arg[i]))
            return 0;
    }
    return 1;
}