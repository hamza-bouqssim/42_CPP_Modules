#include "RPN.hpp"
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: This Program Takes Only One Argument !" << std::endl;
        return 0;
    }
        RPN rpn;
        char *argument;
        int i = -1;
        std::stack<int> stack;
        
        argument = (argv[1]);
        while(argument[++i])
        {
            if (argument[i] == ' ')
                i++;
            if (isdigit(argument[i]))
                stack.push(atoi(&argument[i]));
            else if (argument[i] == '+' || argument[i] == '-' || argument[i] == '*' || argument[i] == '/')
                rpn.applyOperator(stack, argument[i]);
            else
            {
                std::cout << "Error" << std::endl;
                return (0);
            }
        }
        if (stack.size() != 1)
        {
            std::cout << "Bad input" << std::endl;
            return (0);
        }
        std::cout << stack.top() << std::endl;
    return 0;
}