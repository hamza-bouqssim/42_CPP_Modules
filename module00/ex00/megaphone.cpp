#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
    int i = 1;

    if(ac > 1)
    {
        while(av[i])
        {
            int j = 0;
            while(av[i][j])
                std::cout << (char)toupper(av[i][j++]);
            std::cout << ' ';
            i++;
        }
        std::cout << '\n';
        return 0;
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
   return 0;
}