#include <iostream>
using namespace std;

class Stack{
    private:
        int items[64];
        int index;
    
    public:
        Stack();
        void getItems();
        bool isEmpty();
        void push(int item);
        int pop();
};