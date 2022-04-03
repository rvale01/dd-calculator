#include <iostream>
#include "stack.hpp"
using namespace std;

Stack::Stack(){
    index = 0;
};

void Stack::getItems(){
    for (int x = 0; x< index; x++){
        cout << items[x] << "\n";
    }
};

bool Stack::isEmpty(){
    return index == 0;
};

void Stack::push(int item){
    if(index < 64){
        items[index] = item;
        index++;
    }
};

int Stack::pop(){
    if(index != 0){
        index--;
        int value = items[index];
        items[index] = 0;
        return value;
    }  
    return -1;
};

// int main(){
//     Stack stack;
//     stack.push(3);
//     stack.push(4);
//     stack.getItems();
//     int value = stack.pop();
//     cout << value;
//     return 0;
// };