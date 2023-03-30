#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>

class RPN {
    public:
        RPN();
        RPN(const RPN &_RPN);
        RPN &operator= (const RPN &_RPN);
        ~RPN();

        //Methods:
        void applyOperator(std::stack<int> &stack, char argument);
};
#endif