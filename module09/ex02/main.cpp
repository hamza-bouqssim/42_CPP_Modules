#include "PmergeMe.hpp"
int checkNumber(char *number)
{
    int i = -1;
    while(number[++i])
    {
        if (number[i] == ' ')
            i++;
        if (!isdigit(number[i]))
            return 0;
    }
    return 1;
}
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cerr << "Error: This Program Takes Only One Argument !" << std::endl;
        return 0;
    }
    int i = 0;
    while (++i < argc)
    {
        if (!checkNumber(argv[i]))
        {
            std::cout << "Error: Your Input Must Contain Positive Number and Mustn't Contain Characters" << std::endl;
            return 0;
        }
    }

}