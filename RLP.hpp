#include <iostream>
using namespace std;
#include "stack.hpp"

class RLP{
    private:
        Stack stack;

    public:
        // RLP();
        bool check_operator(char ch);
        int operation(int val1, int val2, char operand);
        int rpn_eval(string expr);
};