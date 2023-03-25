#include "RPN.hpp"
void _error(std::string error)
{
    std::cerr << error << std::endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
    if(argc != 2)
        _error("This Program Works With One Argument");
    

    return 0;
}