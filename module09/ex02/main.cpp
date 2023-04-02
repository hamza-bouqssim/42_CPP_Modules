#include "PmergeMe.hpp"



int main(int argc, char** argv)
{
    PmergeMe P;
    std::vector<int> v;
    std::deque<int>d;
    if (argc < 3)
    {
        std::cout << "Error: This Program Works With Atleast Three Arguments !" << std::endl;
        return 0;
    }
    int i = 0;
    while (++i < argc)
    {
        std::string s(argv[i]);

        if (!P.is_number(s))
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        int n = std::atoi(s.c_str());

        v.push_back(n);
        d.push_back(n);
    }
    for (int i = 0; i < (int)v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < (int)d.size(); i++)
    {
        std::cout << d[i] << " ";
    }

    return 0;
}
