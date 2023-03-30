#include "RPN.hpp"
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *argument = argv[1];
		int i = 0;
		std::stack<int>stack;
		while(argument[i])
		{
			if (argument[i] == ' ')
				i++;
			if (isdigit(argument[i]))
				stack.push(atoi(&argument[i]));
			else if (argument[i] == '+' || argument[i] == '-' || argument[i] == '*' || argument[i] == '/')
				applyOperator(stack, argument[i]);
			else
			{
				std::cerr << "Error" << std::endl;
				return 0;
			}
			i++;
		}
		if (stack.size() != 1)
        {
            std::cerr << "Bad input" << std::endl;
            return (0);
        }
        std::cout << stack.top() << std::endl;
	}
	else
		std::cerr << "Error: This Program Works With One Argument !" << std::endl;
	return 0;
}
