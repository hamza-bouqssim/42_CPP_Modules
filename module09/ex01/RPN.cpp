#include "RPN.hpp"
RPN::RPN()
{

};
RPN::~RPN()
{

};
void RPN::applyOperator(std::stack<int> &stack, char argument)
{
	int number1;
	int number2;
	if(stack.size() < 2)
	{
		std::cout << "Error ! Sorry :(" << std::endl;
		return;
	}
	number1 = stack.top();
	stack.pop();
	number2 = stack.top();
	stack.pop();
	if (argument == '+')
		stack.push(number1 + number2);
	if (argument == '-')
		stack.push(number1 - number2);
	if (argument == '*')
		stack.push(number1 * number2);
	if (argument == '/')
	{
		if(number2 != 0)
			stack.push(number1 / number2);
	}	
}
