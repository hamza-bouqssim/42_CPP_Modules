#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>
// void _error(std::string error)
// {
//     std::cerr << error << std::endl;
//     exit(1);
// }

std::string remove_spaces(std::string argument)
{
    argument.erase(remove(argument.begin(), argument.end(), ' '), argument.end());
    return argument;
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "This Program Must Take One Argument" << std::endl;
        return 0;
    }
    std::stack<int>stack;
    std::string argument = remove_spaces(argv[1]);
    int i = 0;
    int n1, n2;
    while(argument[i])
    {
        if(isdigit(argument[i]))
            stack.push(atoi(&argument[i]));
        else if (argument[i] == '+' || argument[i] == '-' || argument[i] == '*' || argument[i] == '/')
            {
                if(stack.size() > 2)
                {
                    std::cerr << "bad input" << std::endl;
                    return 0;
                }
                n1 = stack.top();
                stack.pop();
                n2 = stack.top();
                stack.pop();
                if (argument[i] == '*')
                    stack.push(n1 * n2);
                if (argument[i] == '/')
                {
                    if(n2 != 0)
                        stack.push(n1 / n2);
                    else
                        {
                            std::cout << "Error: Cannot Devide On Zero !";
                            return 0;
                        }
                }
                if (argument[i] == '+')
                    stack.push(n1 + n2);
                if (argument[i] == '-')
                    stack.push(n1 - n2);

            }
        i++;
    }
    if (stack.size() != 1)
    {
        std::cout << "Bad input" << std::endl;
        return (0);
    }
        std::cout << stack.top() << std::endl;

    return 0;
}